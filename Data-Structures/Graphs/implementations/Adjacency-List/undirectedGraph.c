// Adjascency List representation in C

#include <stdio.h>
#include <stdlib.h>

//////// DATA STRUCTURES ////////

struct node {
    // Node data structure
    int vertex;
    // Pointer to the next node
    struct node* next;
};

struct Graph {
    // Number of vertices inside the graph
    int numVertices;
    // Pointer that points to a the Adjacency Lists pointer
    struct node** adjLists;
};


//////// CREATE A NODE //////////

// Return a pointer to a node and takes a vertex
struct node* createNode(int v) {
    // Allocate memory for the new node and store its address in a pointer
    struct node* newNode = malloc(sizeof(struct node));
    // Pass the vertex to the node
    newNode->vertex = v;
    // There are no next values yet, so fill it with NULL
    newNode->next = NULL;
    // Return a pointer that points to the address of the new node 
    return newNode;
}

//////// CREATE A GRAPH //////////

// Return a pointer to the graph and takes the number of vertices
struct Graph* createAGraph(int vertices) {
    // Allocate memory for the new Graph and store its address in a pointer
    struct Graph* graph = malloc(sizeof(struct Graph));
    // Set the number of vertices inside the Graph
    graph->numVertices = vertices;
    // Allocate memory for the adjacency lists store n pointers of node 
    graph->adjLists = malloc(vertices * sizeof(struct node*));

    // There are no node inside the adjacency lists yet, so fill it with NULL
    for (int i = 0; i < vertices; i++)
        graph->adjLists[i] = NULL;

    // Return a pointer that points to the address of the graph
    return graph;
}


//////// ADD EDGE //////////


void addEdge(struct Graph* graph, int s, int d) {
    // -- Add edge from s to d --

    // Create new node with for vertex d
    struct node* newNode = createNode(d);
  
    newNode->next = graph->adjLists[s];
    graph->adjLists[s] = newNode;

    // -- Add edge from d to s --
    // Create new node with for vertex s
    newNode = createNode(s);
  
    newNode->next = graph->adjLists[d];
    graph->adjLists[d] = newNode;
}

//////// PRINT THE GRAPH //////////

void printGraph(struct Graph* graph) {
    for (int v = 0; v < graph->numVertices; v++) {
        struct node* temp = graph->adjLists[v];
        printf("\n Vertex %d:\n ", v);

        while (temp) {
            printf("%d -> ", temp->vertex);
          temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    struct Graph* graph = createAGraph(4);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 0, 3);
    addEdge(graph, 1, 2);

    printGraph(graph);

    return 0;
}