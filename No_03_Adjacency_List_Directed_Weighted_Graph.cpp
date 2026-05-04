#include <iostream>
#include <vector>
using namespace std;

int main() {
    int V, E;

    cout << "=== GRAF BERARAH BERBOBOT ===" << endl;
    cout << "Masukkan jumlah simpul/vertex (V): ";
    cin >> V;

    cout << "Masukkan jumlah sisi/edge (E): ";
    cin >> E;

    // adjacency list dengan bobot
    vector<vector<pair<int, int>>> adj(V);

    cout << endl << "Sekarang masukkan setiap sisi berarah beserta bobotnya:" << endl;
    for (int i = 0; i < E; i++) {
        int asal, tujuan, bobot;
        cout << "Sisi ke-" << i + 1 << 
        endl << "Masukkan asal, tujuan, bobot (contoh: 0 1 5): ";
        cin >> asal >> tujuan >> bobot;

        // Berarah: hanya dari asal ke tujuan dengan bobot
        adj[asal].push_back({tujuan, bobot});
    }

    cout << endl << "Hasil Adjacency List (simpul - (tujuan, bobot)):" << endl;
    for (int i = 0; i < V; i++) {
        cout << "Simpul " << i << " : ";

        for (auto &tujuan : adj[i]) {
            cout << "(" << tujuan.first << ", " << tujuan.second << ") ";
        }

        if (adj[i].empty()) {
            cout << "(tidak ada)";
        }

        cout << endl;
    }

    return 0;
}
