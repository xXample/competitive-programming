#include <bits/stdc++.h>

using namespace std;

int num_iterations(int n, string s, int query) {
    bool B_exists = false;
    for (int i = 0; i < n; ++i) {
        B_exists |= s[i] == 'B';
        if (B_exists) break;
    }

    if (!B_exists) {
        return query;
    }
    
    int count = 0;
    int i = 0;
    while (query != 0) {
        if (s[i] == 'A') --query;
        else query /= 2;
        i = (i + 1) % n;
        ++count;
    }
    return count;
}

void solve() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> queries(q);

    for (int i = 0; i < q; ++i) {
        cin >> queries[i];
    }

    for (int query : queries) {
        cout << num_iterations(n, s, query) << '\n';
    }
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
