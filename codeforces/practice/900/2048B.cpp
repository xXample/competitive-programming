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
    int n, k; 
    cin >> n >> k;
    vi perm(n+1, 0);

    int cnt = 1;
    for (int i = k; i < n+1; i += k) {
        perm[i] = cnt;
        ++cnt;
    }

    for (int i = 1; i < n+1 && cnt <= n; ++i) {
        if (perm[i] == 0) {
            perm[i] = cnt;
            ++cnt;
        }
    }

    for (int i = 1; i <= n; ++i) {
        cout << perm[i] << " \n"[i==n];
    }


    // n=5, k=3
    // 1 2 3 4 5

    // Given k ≤ n, construct a permutation length n s.t. the sum of (the minimum of all subarrays of length k) is minimized 
    // There's exactly n-k+1 such subarrays
    // Each subarray is length k, from i to i+k-1

    // Algorithm: 
    // make a[k] = 1. then a[2*k] = 2, then a[3*k] = 3 etc. until we reach the end. Afterwards, put the remaining in whatever spots. 
    // PROOF:
    // Since each subarray is of length k, then each element can be in at most k subarrays. Thus, we want to maximize the #of subarrays each minimum element is in. 
    // This algorithm maximizes this inclusion accordingly. 
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