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
    int a, b, x;
    cin >> a >> b >> x;

    int num_div = 0;
    int num_ops = INF;
    while (a != b) {
        if (a > b) swap(a, b);
        num_ops = min(num_ops, abs(a - b) + num_div);
        num_div++;
        b /= x;
    }

    num_ops = min(num_ops, num_div);
    cout << num_ops << '\n';
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

// const int MOD = 1e9 + 7;
// const int INF = 1e9;
// const ll LINF = 1e18;

// void solve() {
//     int a, b, x;
//     cin >> a >> b >> x;
//     int moves = 0;
//     while (a != b) {
//         if (a > b) swap(a, b);
//         if (a + 1 == b) {
//             a += 1;
//             moves += 1;
//         }
//         else if (b <= a*x - 1 && a + 2 == b) {
//             a += 2;
//             moves += 2;
//         } else {
//             b /= x;
//             moves += 1;
//         }
//     }
//     cout << moves << '\n';
//     return;
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