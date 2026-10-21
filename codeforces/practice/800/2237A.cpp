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
    /*
    Claim: The best algorithm is applying it from left to right
    Proof: Suppose not true. Then for i < j, then applying a[j] then a[i] is better. 
    Then the total sum must be strictly less than a[i], a[j] compared to a[j], a[i]
    
    if a[i] > a[j], then it does not matter which block we do first, since a[j] hits a block shorter than it, and a[i] is bigger.
    if a[i] < a[j], then if we do a[i], we might hit a block that a[j] would otherwise hit, allowing a[j] to hit a different target
                    and if we do a[j], then a[i] might still hit the same block that a[j] hit, or otherwise a[i] would hit the same target it was going to hit regardless. 
    The contradicts our assumption
    */
   int n; cin >> n;
   vi a(n); for (auto &i : a) cin >> i;

   for (int i = 0; i < n; ++i) {
     int j = i+1;
     while (j < n && a[i] >= a[j]) ++j;
     if (j < n) a[j] = a[i];
   }

   int total = 0;
   for (auto i : a) total += i;
   cout << total << '\n';
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