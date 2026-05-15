#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define F first
#define S second

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
// void solve() {
//     int n;
//     cin >> n;
//     vi p(n);
//     vi found(n);
//     vi missing;
//     for (int i = 0; i < n; ++i) {
//         cin >> p[i];
//         --p[i];
//         if (p[i] != -1) found[p[i]] = 1;
//         else missing.push_back(i);
//     }
//     if (missing.size() == 1) for (int i = 0; i < n; ++i) if (found[i] == 0) p[missing[0]] = i;
//     int left = 0, right = n-1;
//     while (left < n && p[left] == left) ++left;
//     while (0 <= right && p[right] == right) --right;
//     cout << max(0, right - left + 1) << '\n';
// } 
void solve() {
    int n;
    cin >> n;

    vi p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        --p[i];
    }
    vi found(n);
    for (int i = 0; i < n; ++i) {
        if (p[i] != -1) {
            found[p[i]] = 1;
        }
    }
    vi missing;
    for (int i = 0; i < n; ++i) {
        if (p[i] == -1) {
            missing.push_back(i);
        }
    }
    
    if (missing.size() == 1) {
        for (int i = 0; i < n; ++i) {
            if (found[i] == 0) {
                int missing_value = i;
                p[missing[0]] = missing_value;
            }
        }
    }
    
    int left = 0, right = n-1;
    while (left < n && p[left] == left) ++left;
    while (0 <= right && p[right] == right) --right;
    cout << max(0, right - left + 1) << '\n';
}

// void solve() {
//     int n;
//     cin >> n;
//     vi p(n);
//     for (auto &i : p) cin >> i;

//     vi found(n+1);
//     for (int i = 0; i < n; ++i) {
//         int num = p[i];
//         found[num] += 1;
//     }
    
//     vi missing;
//     for (int i = 1; i < n+1; ++i) {
//         if (found[i] == 0) missing.pb(i);
//     }
    
//     for (int i = 0; i < n; ++i) {
//         if (sz(missing) == 0) break;
//         if (p[i] == 0) {
//             p[i] = missing.back();
//             missing.pop_back();
//         }
//     }
//     // assert(sz(missing) == 0);
    
//     int left = -1;
//     for (int i = 0; i < n; ++i) {
//         if (p[i] != i+1) {
//             left = i+1;
//             break;
//         }
//     }
    
//     int right = -1;
//     for (int i = n-1; i >= 0; --i) {
//         if (p[i] != i+1) {
//             right = i+1;
//             break;
//         }
//     }
    
//     if (left == -1) cout << 0 << '\n';
//     else cout << (right - left + 1) << '\n';
// }

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