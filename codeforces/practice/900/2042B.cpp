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
    int n; cin >> n;
    vi c(n); for (auto &i : c) cin >> i;

    int single_group = 0, multi_group = 0; 

    vi seen(n+1, 0);
    for (int i = 1; i <= n; ++i) {
        int color = c[i-1];
        ++seen[color];
    }

    for (int color = 1; color <= n; ++color) {
        single_group += seen[color]==1;
        multi_group += seen[color]>1;
    }

    // for (int i = 1; i <= n; ++i) {
    //     if (seen[i] != 0) cout << seen[i] << ' ';
    // }cout << '\n';
    // cout << "single: " << single_group << " multi: " << multi_group << '\n';
    
    int alice = multi_group + 2 * ((single_group + 1) / 2);

    cout << alice << '\n';

    /*
    Algorithm: 
    group elements from smallest group to largest group. Alice and bob take turns taking marbles of smallest to largest group. 
    Points are tallied up. 

    Faster Algorithm: 
    Count number of 1-group marbles m. Assign 2*ceil(m/2) points to Alice. 
    Since there exists >= 2 marbles per group, Alice can just copy bob, and she'll get every other marble. 
    Thus, Alice gets every color of all multi-groups. 

    PROOF: 
    Alice should always take the groups of one. As should bob, since those are the highest value. 
    After that, neither person will ever get a "whole group": if Alice take from a group-of-2, then Bob will take from the same group. 
    Thus, we only need to consider how many 1-groups Alice will get, and how many other marbles Alice will get. 

    */
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