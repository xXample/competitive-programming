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
    ll a, b, c;
    cin >> a >> b >> c;
    cout << ((abs(a+c - b) > abs(a - b)) ? abs(a+c - b) : abs(a - b)) << '\n';
    // if (a >= b) {
    //     cout << abs(a+c - b) << '\n';
    // }
    // else if (abs(a+c - b) > abs(a - b)){
    //     cout << abs(a+c - b) << '\n';
    // }
    // else {
    //     cout << abs(a - b) << '\n';
    // }
}

/*
There exists an initial score, |a - b|. 
Alice wants to maximize, bob minimize. 
Ideally, Alice would make it so big, that Bob can't do anything. 
Ideally, Bob would make b = a, so it equals zero. 

If a >= b, then of course, Alice should just take all the stones — it'll make the score bigger.
If a < b <==> a - b < 0, 
    I think Alice should compare if |a+c - b| > |a - b|. 
    Bob wants to minimize. Since a < b, |a - b++| > |a - b|. Thus Bob will do nothing. 
    Thus, Alice should only take all the rocks if it'll strictly improve the current situation. 
    Otherwise she should do nothing, since taking some rocks will be strictly worse. 
*/

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