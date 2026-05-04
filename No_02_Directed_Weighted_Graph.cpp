#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<vector<int>>& mat, int i, int j, int weight) {
    mat[i][j] = weight;
}

void displayMatrix(vector<vector<int>>& mat) {
    int V = mat.size();
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int V = 6;
    vector<vector<int>> mat(V, vector<int>(V, 0));
    
    addEdge(mat, 0, 1, 4);
    addEdge(mat, 0, 2, 9);
    addEdge(mat, 1, 2, 8);
    addEdge(mat, 2, 3, 6);
    addEdge(mat, 3, 4, 7);
    addEdge(mat, 4, 5, 5);
    
    cout << "Adjacency Matrix for Directed Weighted Graph:\n";
    displayMatrix(mat);
    return 0;
}