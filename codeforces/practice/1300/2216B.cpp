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
    int ct, ch, cu;
    cin >> ct >> ch >> cu;
    ll total = 0;

    ll packing1 = min(ct, cu);
    total += packing1 * 4;
    ct -= packing1;
    cu -= packing1;
    if (ct == 0) {
        total += cu * 3 + ch * 3;
        cout << total << '\n';
        return;
    }

    // Then cu == 0, and we pack ct and ch.

    // Packing Hs with two Ts
    ll num = (ch*2 <= ct) ? ch : ct / 2;
    total += num*7;
    ch -= num;
    ct -= 2*num;

    if (ch == 0) {
        total += 2*ct + 1;
        cout << total << '\n';
        return;
    }

    if (ct == 1) {
        total += 5;
        ct--;
        ch--;
    }

    if (ct == 0) {
        total += 3*ch;
        cout << total << '\n';
        return;
    }








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