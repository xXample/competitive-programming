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
You basically have to divide a bunch. 
After which point, you only need to add. 
In no scenario, will you be interleaving dividing with adding. 

Ok, so you just need to calculate two values, and take the MIN between them... how....

min( b-a, abs(b/x - a) + 1)
^here, if dividing is worth it, then it's fine, keep dividing. 

17 3 3
14 < abs(17/3 - 3) + 1 = 2 + 1 = 3
14 > 3, so else condition

17 /=3 ==> b = 5, a = 3, num_ops = 1

---

a = 3, b = 5
5 - 3 < abs(5 / 3 - 3) + 1 = 3... 2 < 3, yes that's true. So add 


*/


void solve() {
    ll a, b, x;
    cin >> a >> b >> x;

    int num_ops = 0;
    while (a != b) {
        if (a > b) swap(a, b);
        if (b-a < abs(b/x - a) + 1 && b-a < abs(b/x - max(a, b/x)/x + 2)) {
            // cout << "Add...done\n";
            num_ops += b-a;
            a += b-a;
        }
        else {
            // cout << "Divide\n";
            b = b/x;
            ++num_ops;
        }
    }
    cout << num_ops << '\n';
    // cout << "END\n";
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