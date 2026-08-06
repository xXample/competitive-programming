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
    
    if (n <= k) {
        cout << n << '\n';
        return;
    }

    int sum = 0;
    int num_bits = 0;
    int bit_value = 1;
    while(true) {
        for (int i = 0; i < k && sum <= n; ++i) {
            sum += bit_value;
            ++num_bits;
        }
        
        if (sum <= n) {
            bit_value *= 2;
            continue;
        }

        while (sum > n) {
            sum -= bit_value;
            --num_bits;
        }
        break;
    } 

    cout << num_bits << '\n';
}
/*
if n <= k then output n

Consider cases n > k
We can have k bits. That will give a sum of k. 

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