#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int key;
    struct Node *next;
} Node;


Node *createNode(int key) {
    Node *newNode = malloc(sizeof(Node));
    newNode->key = key;
    newNode->next = NULL;

    return newNode;
}

Node *findNode(Node *head, int key) {
    if (head == NULL)
        return NULL;
    
    Node *current = head;
    while (current != NULL) {
        if (current->key == key)
            return current;
        current = current->next;
    }
    return NULL;
}

void insertHead(Node **head, Node *newNode) {
    if (newNode == NULL) return;

    newNode->next = *head;
    *head = newNode;
}

void insertTail(Node **head, Node *newNode) {
    if (newNode == NULL) return;
    
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node *current = *head;
    while (current->next != NULL)
        current = current->next;

    current->next = newNode;
}

void insertAfter(Node *prevNode, Node *newNode) {
    if (newNode == NULL) return;
    
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void removeNode(Node **head, int key) {
    if (*head == NULL) return;

    if ((*head)->key == key) {
        Node *toRemove = *head;
        *head = (*head)->next;
        free(toRemove);
    } else {
        Node *current = *head;
        while (current->next != NULL) {
            if (current->next->key == key) {
                Node *toRemove = current->next;
                current->next = current->next->next;
                free(toRemove);
            }
            current = current->next;
        } 
    }  
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

void deallocate(Node **head) {
    Node *current = *head;

    while (current != NULL) {
        Node *aux = current;
        current = current->next;
        free(aux);
    }
    *head = NULL;
}

void printLinkedList(Node *head) {
    Node *current = head;
    while (current != NULL) {
        printf("( Address: %p Key: %d | Next: %p ) --> ", current, current->key, current->next);
        current = current->next;
    }
    printf("NULL   (Length: %d)\n", length(head));
}

int main() {
    Node *head = NULL;
    Node *temp;

    insertHead(&head, createNode(3));
    insertHead(&head, createNode(2));
    insertHead(&head, createNode(5));
    insertTail(&head, createNode(8));
    insertAfter(findNode(head, 5), createNode(1));

    printLinkedList(head);
    
    printf("\n");

    removeNode(&head, 5);

    printLinkedList(head);

    deallocate(&head);

    return 0;
}