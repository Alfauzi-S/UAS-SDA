#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void addEdge(vector<vector<pair<int, int>>>& adj, int i, int j, int weight) {
    adj[i].push_back({j, weight});
    adj[j].push_back({i, weight});
}

void displayAdjList(const vector<vector<pair<int, int>>>& adj) {
    for (int i = 0; i < adj.size(); i++) {
        cout << i << ": ";
        for (auto& p : adj[i])
            cout << "(" << p.first << "," << p.second << ") ";
        cout << endl;
    }
}

int main() {
    int V = 6;
    vector<vector<pair<int, int>>> adj(V);
    
    addEdge(adj, 0, 1, 5);
    addEdge(adj, 0, 2, 3);
    addEdge(adj, 1, 2, 2);
    addEdge(adj, 2, 3, 4);
    addEdge(adj, 3, 4, 1);
    addEdge(adj, 4, 5, 6);
    
    cout << "Adjacency List for Undirected Weighted Graph:\n";
    displayAdjList(adj);
    return 0;
}