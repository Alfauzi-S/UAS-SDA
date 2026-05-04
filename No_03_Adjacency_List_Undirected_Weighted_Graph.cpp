#include <iostream>
#include <vector>
using namespace std;

int main() {
    int V, E;

    cout << "=== GRAF TIDAK BERARAH BERBOBOT ===" << endl;
    cout << "Masukkan jumlah simpul/vertex (V): ";
    cin >> V;

    cout << "Masukkan jumlah sisi/edge (E): ";
    cin >> E;

    // adjacency list: setiap elemen memiliki pasangan (tetangga, bobot)
    vector<vector<pair<int, int>>> adj(V);

    cout << endl << "Sekarang masukkan setiap sisi beserta bobotnya:" << endl;
    for (int i = 0; i < E; i++) {
        int asal, tujuan, bobot;
        cout << "Sisi ke-" << i + 1 <<
        endl << "Masukkan asal (V), tujuan (V), dan bobot (W) (contoh: 0 1 10): ";
        cin >> asal >> tujuan >> bobot;

        // Tidak berarah: tambahkan kedua arah dengan bobot yang sama
        adj[asal].push_back({tujuan, bobot});
        adj[tujuan].push_back({asal, bobot});
    }

    cout << endl << "Hasil Adjacency List (simpul - (tetangga, bobot)):" << endl;
    for (int i = 0; i < V; i++) {
        cout << "Simpul " << i << " : ";
        for (auto &tetangga : adj[i]) {
            cout << "(" << tetangga.first << ", " << tetangga.second << ") ";
        }
        cout << endl;
    }

    return 0;
}
