// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef pair<int,int> pii;
// typedef pair<ll,ll> pll;
// typedef vector<int> vi;
// typedef vector<ll> vll;

// #define all(x) (x).begin(), (x).end()
// #define F first
// #define S second

// const int MOD = 676767677;
// const int INF = 1e9;
// const ll LINF = 1e18;

// void solve() {
//     int n, m; 
//     cin >> n >> m;

//     vi b(n);
//     for (auto &i : b) cin >> i;
//     vi c(m, 0);
//     for (auto i : b) c[i]++;
//     for (int i = 1; i < m; ++i) c[i] += c[i-1];

//     int ans = 1;
//     for (int i = 0; i < n; ++i) {
//         if (b[i] == 0) continue;
        
//         int t = INF;
//         for (int j = i-1; j <= i+1; j += 2) {
//             if ((0 <= j) && (j < n)) {
//                 t = min(t, b[j]);  
//             }
//         }
        
//         t += 1;
//         if (b[i] == t) {
//             ans = (ans * c[t-1]) % MOD;
//         }
//         else if (b[i] > t) {
//             int count = (t >= 2) ? (c[t-1] - c[t-2]) : c[t-1];
//             ans = (ans * count) % MOD;
//         }
//         else {
//             ans = 0;
//         }
//     }
//     cout << ans % MOD << '\n';
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t = 1;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }