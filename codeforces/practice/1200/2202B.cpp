#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define all(x) (x).begin(), (x).end()
#define F first
#define S second

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
    int n;
    string X;
    cin >> n >> X;

    if (n % 2 == 1 && X[0] == 'b') {
        cout << "NO\n";
        return;
    }

    if (n % 2 == 0) {
        for (int i = 1; i < n; i += 2) {
            if (X[i-1] == X[i]) {
                cout << "NO\n";
                return;
            }
        }
    }
    else if (n % 2 == 1) {
        for (int i = 2; i < n; i += 2) {
            if (X[i-1] == X[i]) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}
// void solve() {
//     int n;
//     string X;
//     cin >> n >> X;
//     int ptr = 0;

//     int l = 0, r = n-1;
//     string T;
//     T.reserve(n);
//     for (int i = 0; i < n; ++i) T += (i % 2 == 0) ? 'a' : 'b';
    
//     while (l <= r) {
//         int length = r - l + 1;

//         if (length % 2 == 1) {
//             if (X[ptr] != '?' && X[ptr] != T[l]) { cout << "NO\n"; return; }
//             else ++l;
//         } 

//         // length % 2 == 0
//         else if (X[ptr] == T[l]) ++l;
//         else if (X[ptr] == T[r]) --r;

//         // X[ptr] == '?'
//         else if (ptr == n-1) break;
//         else if (X[ptr+1] == T[l]) --r;
//         else ++l;

//         ++ptr;

//     }
//     cout << "YES\n";
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