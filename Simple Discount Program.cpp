#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calculate_min_cost(vector<int>& prices, int X) {
    sort(prices.begin(), prices.end());  // Mengurutkan harga buku dari yang termurah ke yang termahal
    int total_cost = 0;
    int n = prices.size();
    for (int i = 0; i < n; i += X) {
        int transaction_cost = 0;
        int min_price = INT_MAX;
        for (int j = 0; j < X && i + j < n; ++j) {
            transaction_cost += prices[i + j];
            min_price = min(min_price, prices[i + j]);
        }
        total_cost += transaction_cost - min_price / 2;  // Diskon 50% pada buku termurah di transaksi ini
    }
    return total_cost;
}

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> prices(N);
    for (int i = 0; i < N; ++i) {
        cin >> prices[i];
    }
    vector<int> X(Q);
    for (int i = 0; i < Q; ++i) {
        cin >> X[i];
    }
    
    for (int i = 0; i < Q; ++i) {
        cout << calculate_min_cost(prices, X[i]) << endl;
    }
    
    return 0;
}
