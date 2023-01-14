# Linked List

## What is a linked list
- It is a data structure in which the nodes are arranged in a linear order, determined by a pointer in each node. 

## Usages
- Undo functionality
- Browser cache
- Polynomial addition
- Prioritised job queues
- Implement other data structures (stacks, queues, trees and graphs)

## Implementation

### Singly linked list
- In this case, a node contains its data and a pointer to the next node in the linked list
```
Node:
(key|next pointer)

Singly Linked List:
 head                           tail
(2|->)  (8|->)  (4|->)  (6|->)  (3|/)
```

### Doubly linked list
- Each element has two pointer attributes: next, points to the next element, and prev, points to the previous element 
```
Node:
(prev pointer|key|next pointer)

 head                                            tail
(/|2|->)    (<-|8|->)   (<-|4|->)   (<-|6|->)   (<-|3|/)
```

#### Search node
- Get a Node by its key
- ##### Algorithm 
    - Same algorithm for singly linked list and doubly linked list
    - Firstly, we need to check if the linked list is empty (head = NULL), if not, we are going to iterate over it while current (auxiliar node) is not NULL. If the the key of the current node equal the key of the node we're looking for, return current, otherwise, go to the next next node.
    ```
    findNode(*head, key)
        if head == NULL
            return NULL
        
        node *current = head
        while current != NULL
            if current.key == key
                return current
            current = current.next
        return NULL
    ```

- ##### Complexity
    - Time complexity: O(n) -> We are looking over each element of the linked list

#### Insert
- Insert a new node after a node from the linked list

- ##### Algorithm
    ###### Singly linked list
    ```
    insertAfter(*prevNode, *newNode)
        newNode.next = prevNode.next
        prevNode.next = newNode
    ```

    ###### Doubly linked list

- ##### Complexity
    - Time complexity: O(1)

#### Remove

- ##### Algorithm
    ###### Singly linked list
    ```
    removeNode(**head, int key) 
    if *head == NULL 
        return

    if (*head).key == key 
        node *toRemove = *head
        *head = (*head).next
        free(toRemove)
    else
        node *current = *head
        while current.next != NULL 
            if current.next->key == key 
                node *toRemove = current.next
                current.next = current.next.next
                free(toRemove)
            
            current = current.next
    ```
    ###### Doubly linked list

- ##### Complexity
    - Time complexity (search node that will be removed): O(n)
    - Time complexity (remove node): O(1)


