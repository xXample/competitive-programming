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
    ll w, h;
    cin >> w >> h;

    auto extract = [](){
        ll k;
        cin >> k;
        vll elements(k);
        for (int i = 0; i < k; ++i) {
            cin >> elements[i];
        }
        return elements;
    };
    
    vll x_lower = extract();
    vll x_upper = extract();
    vll y_left = extract();
    vll y_right = extract();

    ll val = (x_lower.back() - x_lower.front()) * h;
    val = max(val, (x_upper.back() - x_upper.front()) * h);
    val = max(val, (y_left.back() - y_left.front()) * w);
    val = max(val, (y_right.back() - y_right.front()) * w);
    cout << val << '\n';



}

/*
Now, we want the three points that give the largest area.
Also, two points must be on the same side.
Trivially, for each side, we must pick the two points furthest apart.
Then, the time complexity is about O(4*n), which is plenty of time.
Is it really that simple though?

Algorithm:


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