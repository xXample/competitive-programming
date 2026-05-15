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

        bool all_same_char = true;
        char first = s[0];
        for (char next : s) {
            if (first != next) {
                all_same_char = false;
                break;
            }
        }

        if (all_same_char) {
            cout << "NO\n";
            continue;
        }
        else if (k > 0) {
            cout << "YES\n";
            continue;
        }

        bool possible = false;
        for (int l = 0, r = n - 1; l < r; ++l, --r) {
            if (s[l] != s[r]) {
                if ((int)s[l] < (int)s[r]) possible = true;
                break;
            }
        }
        if (possible) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}