#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int ones = 0, zeros = 0;
        for (char c : s) {if (c == '1') ++ones; else ++zeros;}

        int pairs = ones/2 + zeros/2;

        while (pairs > k and ones >= 2 and zeros >= 2) {
            pairs -= 2;
            ones -= 2;
            zeros -= 2;
        }
        
        if (pairs == k) cout << "YES\n";
        else cout << "NO\n";
    }
}