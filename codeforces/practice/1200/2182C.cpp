#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n), c(n);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    for (auto &i : c) cin >> i;
    
    int head_body = 0;
    for (int i = 0; i < n; ++i) {
        bool valid = true;
        for (int j = 0; j < n; ++j) {
            if (a[j] >= b[(i+j) % n]) {
                valid = false;
                break;
            }
        }
        if (valid) ++head_body;
    }

    int body_feet = 0;
    for (int i = 0; i < n; ++i) {
        bool valid = true; 
        for (int j = 0; j < n; ++j) {
            if (b[j] >= c[(i+j) % n]) {
                valid = false;
                break;
            }
        }
        if (valid) ++body_feet;
    }
    // cout << n << ' ' << head_body << ' ' << body_feet << '\n';
    cout << 1LL * n * head_body * body_feet << '\n';    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}