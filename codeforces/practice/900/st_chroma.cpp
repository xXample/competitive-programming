#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        for (int i = 0; i < n; ++i) {
            if (i == x) {
                cout << n-1 << ' ';
            }
            else if (i == n-1 && x != n) {
                cout << x << ' ';
            }
            else {
                cout << i << ' ';
            }
        }
        cout << '\n';
    }
}