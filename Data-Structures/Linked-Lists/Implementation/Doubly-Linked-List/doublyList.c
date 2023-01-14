#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int key;
    struct Node *next;
    struct Node *prev;
} Node;

Node *createNode(int key) {
    Node *newNode = malloc(sizeof(Node));

    newNode->key = key;
    newNode->next = NULL;
    newNode->prev = NULL;

    return newNode;
}

Node *getNode(Node *head, int key) {
    if (head == NULL) return NULL;

    for (Node *current = head; current != NULL; current = current->next)
        if (current->key == key) 
            return current; 

    return NULL;
}

void insertFront(Node **head, Node *newNode) {
    if (newNode == NULL) return;

    if (*head != NULL) {
        newNode->next = *head;
        (*head)->prev = newNode;
    } else 
        newNode->next = NULL;

    newNode->prev = NULL;
    *head = newNode;
}
 
void insertAfter(Node *prevNode, Node *newNode) {
    if (prevNode == NULL || newNode == NULL) return;
    
    if (prevNode->next != NULL) {
        newNode->next = prevNode->next;
        newNode->next->prev = newNode;
    } else 
        newNode->next = NULL;

    newNode->prev = prevNode;
    prevNode->next = newNode;
}

void removeNode(Node **head, Node *toDelete) {
    if (*head == NULL || toDelete == NULL)
        return;

    if (*head == toDelete)
        *head = toDelete->next;

    if (toDelete->next != NULL)
        toDelete->next->prev = toDelete->prev;

    if (toDelete->prev != NULL)
        toDelete->prev->next = toDelete->next;

    free(toDelete);
}
 
void deallocate(Node **head) {
    Node *current = *head;
    while (current->next != NULL) {
        current = current->next;
        free(current->prev);
    }
    free(current);

    *head = NULL;
}

int length(Node *head) {
    Node *current = head;
    int c = 0;

    while (current != NULL) {
        c++;
        current = current->next;
    }
    return c;
}

void printLinkedList(Node *head) {
    Node *current = head;

    printf("NULL  <----> ");

    while (current != NULL) {
        if (current == head)
            printf("[HEAD]");

        printf(" (Previous: %p | Address: %p Key: %d | Next: %p ) ", current->prev, current, current->key, current->next);

        printf("<---->");
        current = current->next;
    }
    printf(" NULL - (Length: %d)\n", length(head));
}


int main() {
    Node *head = NULL;

    insertFront(&head, createNode(5));
    insertAfter(getNode(head, 5), createNode(3));

    printLinkedList(head);

    deallocate(&head);

    return 0;
}