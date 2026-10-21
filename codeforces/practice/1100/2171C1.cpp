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
    cin >> n;
    vi a(n), b(n);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;

    int a_point = 0, b_point = 0;
    for (int i = 0; i < n; ++i) {
        a_point ^= a[i];
        b_point ^= b[i];
    }

    if (a_point == b_point) {
        cout << "Tie\n";
        return;
    }

    for (int i = n-1; i >= 0; --i) {
        if (a[i] == b[i]) continue;
        cout << (i % 2 == 0 ? "Ajisai" : "Mai") << '\n';
        return;
    }
}

/*
If ai == bi for all i, then it's a Tie
If a has odd sum, ajisaid gets point ==> even sum implies 0 points
If b has odd sum, Mai gets point ==> even sum implies 0 points

So, Ajisai wants an odd sum for a, and Mai wants an odd sum for b. 
Ignore i s.t. a[i] == b[i].

There's the current state (i.e. who's winning? Is it Ajisai, Mai, or Tie?)
There's the #of switches Ajisai and Mai have (i.e. places where they differ)
There's the ordering of the switches (there's a benefit to having your switches later in the game)

0 0 1 0
1 0 1 1
Here, currently it's a Tie. 
If Ajisai does nothing, then it's a Tie.
If Ajisai switches i=1, then they're still Tie. 

The underlying structure is that, becuase it's currently a tie, any switches will make both persons go from 0-->1 or 1-->0.

ALGORITHM
If the structure is currenlty a Tie, output Tie and Halt.
Find largest i s.t. a[i] != b[i]. 
If i is odd, output Ajisai. Else output Mai. Halt. 

PROOF
If the strucure is currenlty a Tie, then any switches will not change the difference in points. 
If the struture is not a tie, we want to know who gets that 1 point, Ajisai, or Mai? 
Any switch must change that allocation of points. Thus, gets the last turn will win that one point. QED.
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