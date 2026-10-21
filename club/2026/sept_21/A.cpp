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
    int a_min = INF;
    for (int i = 0; i < 3; ++i) {
        int val; 
        cin >> val;
        a_min = min(a_min, val);
    }
    cout << n - a_min << '\n';

}

/*
Algorithm
Given n, a
find i s.t. a[i] is minimized
otuput n - a[i]. 

PROOF
The minimal possible #of weak people is where an individual is maximally weak. 
So we only need to look at the "worst" problem existing. 
So we only focus on the smallest a[i], since the least number of winning occured (so maximum #of failures)
Then, we simply count the number of people who are weak in that problem, which is n - a[i].
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