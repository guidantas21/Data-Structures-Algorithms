// Adjascency List representation in C++

#include <iostream>
#include <vector>

///////// ADD EDGE //////////

void addEdge(std::vector<int> adj[], int s, int d) {
    adj[s].push_back(d);
    adj[d].push_back(s);
}

//////// PRINT GRAPH ////////

// Print the graph
void printGraph(std::vector<int> adj[], int V) {
    for (int d = 0; d < V; ++d) {
        std::cout << "\n Vertex "
        << d << ":";
    for (auto x : adj[d])
        std::cout << "-> " << x;
        printf("\n");
  }
}

int main() {
    const int V = 5;

    // Create a graph
    std::vector<int> adj[V];

    // Add edges
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 2);
    printGraph(adj, V);
    return 0;
}