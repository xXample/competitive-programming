#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m, p, q;
        cin >> n >> m >> p >> q;
        if (n % p == 0 && (n/p)*q != m) {
            cout << "NO\n";
        }    
        else {
            cout << "YES\n";
        }
    }
}