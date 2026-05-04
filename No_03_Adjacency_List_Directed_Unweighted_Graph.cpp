#include <iostream>
#include <vector>
using namespace std;

int main() {
    int V, E;

    cout << "=== GRAF BERARAH TIDAK BERBOBOT ===" << endl;
    cout << "Masukkan jumlah simpul/vertex (V): ";
    cin >> V;

    cout << "Masukkan jumlah sisi/edge (E): ";
    cin >> E;

    // Adjacency List
    vector<vector<int>> adj(V);

    cout << endl << "Sekarang masukkan setiap sisi (berarah, dari u ke v):" << endl;
    for (int i = 0; i < E; i++) {
        int asal, tujuan;
        cout << "Sisi ke-" << i + 1
             << "Masukkan simpul asal dan tujuan (contoh: 0 1): ";
        cin >> asal >> tujuan;

        // Berarah: hanya tambahkan dari asal ke tujuan
        adj[asal].push_back(tujuan);
    }

    cout << endl << "Hasil Adjacency List:" << endl;

    for (int i = 0; i < V; i++) {
        cout << "Simpul " << i << " menuju ke: ";

        for (int neighbor : adj[i]) {
            cout << neighbor << " ";
        }

        if (adj[i].empty()) {
            cout << "(tidak ada)";
        }

        cout << endl;
    }

    return 0;
}
