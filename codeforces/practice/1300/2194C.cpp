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

/*
We're given k strings of length n. 
Find smallest pattern between all strings s.t. the pattern repeated makes up a whole string.

Each index will contain as most 26 characters (a --> z).
Each index will be given a 26 char array. 
Thus, we need a k*26 2D array.

Then, we iterate over all divisors d of n. 
For every d | n, we check every i + d index if they have the same character. 
If a match is found for all i, then we're done. Else move on to the next d. 
Eventually, it'll have to work, but it'll just be the whole array.
*/


void solve() {
    int n, k;
    cin >> n >> k;

    vector<vector<bool>> entries(n, vector<bool>(26, false));

    for (int i = 0; i < k; ++i) {
        string s; 
        cin >> s;
        for (int idx = 0; idx < n; ++idx) {
            entries[idx][s[idx] - 'a'] = true;
        }
    }

    vector<int> divisors;
    for (int d = 1; d <= n ; ++d) {
        if (n % d == 0) divisors.push_back(d);
    }

    for (auto d : divisors) {
        string ans;

        for (int i = 0; i < d; ++i) {
            for (int c = 0; c < 26; ++c) {
                
                bool flag = true;
                for (int j = i; j < n; j += d) {
                    flag &= entries[j][c];
                    if (!flag) break;
                }
                if (!flag) continue;
                ans += c + 'a';
                break;
            }
            if (ans.size() != i+1) break;
        }
        
        if (ans.size() != d) continue;
        for (int i = 0; i < n/d; ++i) cout << ans;
        cout << '\n';
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