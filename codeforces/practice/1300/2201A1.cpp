#include <bits/stdc++.h>
using namespace std;

// void solve() {
//     int n;
//     cin >> n;

//     vector<int> a(n);
//     for (auto &x : a) cin >> x;
//     vector<int> st;

//     for (int i = n-1; i >= 0; --i) {
//         while (!st.empty() && st.back() == a[i] + 1) {
//             st.pop_back();
//         }
//         st.push_back(a[i]);
//     }
//     cout << st.size() << '\n';
// }


void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &x : a) cin >> x;

    int cnt = 1;
    int curr = 0;
    int next = 1;
    while (curr < n && next < n) {
        if (!(a[curr] < a[next] && a[next] <= a[next - 1] + 1)) {
            curr = next;
            ++cnt;
        }
        ++next;
    }
    cout << cnt << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}



