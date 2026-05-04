#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<vector<int>>& adj, int i, int j) {
    adj[i].push_back(j);
}

void displayAdjList(const vector<vector<int>>& adj) {
    for (int i = 0; i < adj.size(); i++) {
        cout << i << ": ";
        for (int j : adj[i])
            cout << j << " ";
        cout << endl;
    }
}

int main() {
    int V = 6;
    vector<vector<int>> adj(V);
    
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 4, 5);
    
    cout << "Adjacency List for Undirected Unweighted Graph:\n";
    displayAdjList(adj);
    return 0;
}