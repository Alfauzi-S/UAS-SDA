#include <iostream>
#include <vector>
using namespace std;

int main() {
    int V, E;

    cout << "=== GRAF TIDAK BERARAH TIDAK BERBOBOT ===" << endl;
    cout << "Masukkan jumlah simpul/vertex (V): ";
    cin >> V;

    cout << "Masukkan jumlah sisi/edge (E): ";
    cin >> E;

    vector<vector<int>> adj(V);

    cout << endl << "Sekarang masukkan setiap sisi:" << endl;
    for (int i = 0; i < E; i++) {
        int asal, tujuan;
        cout << "Sisi ke-" << i + 1
             << endl << "Hubungkan simpul asal dan tujuan (contoh: 0 1): ";
        cin >> asal >> tujuan;

        adj[asal].push_back(tujuan);
        adj[tujuan].push_back(asal);
    }

    cout << endl << "Hasil Adjacency List:" << endl;
    for (int i = 0; i < V; i++) {
        // Baris narasi
        cout << "Simpul " << i << " bertetangga dengan: ";
        for (int neighbor : adj[i]) {
            cout << neighbor << " ";
        }
        if (adj[i].empty()) {
            cout << "(tidak ada)";
        }
        cout << endl;

        // Baris representasi list
        cout << "[";
        for (size_t j = 0; j < adj[i].size(); j++) {
            if (j > 0) cout << ", ";
            cout << adj[i][j];
        }
        cout << "]" << endl;
    }

    return 0;
}
