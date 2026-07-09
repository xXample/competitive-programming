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
    ll n; cin >> n;
    string bits;
    while (n > 0) {
        bits += to_string(n&1);
        n = n >> 1; 
    }

    while (bits.size() < 60) {
        ll l = 0, r = bits.size() - 1;
        while (l <= r) {
            if (l == r && bits[l] == '0' && bits[r] == '0') {
                cout << "YES\n";
                return;
            }
            if (r == l+1 && bits[l] == bits[r]) {
                cout << "YES\n";
                return;
            }
            if (bits[l] != bits[r]) {
                break;
            }
            ++l, --r;
        }
        bits += "0";
    }
    cout << "NO\n";


    // If n is even and a palindrome, accept
    // If n is odd and a palindrome and the middle element is 0, accept.
    // Else, add a 0 to the "front". Keep going until the string is 60 bits long. 
    // At that point, we know it won't work, and we reject

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