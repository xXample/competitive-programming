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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Make frequency list of numbers
    // Iterate upward, counting the "load" of numbers <= to the current number. 
    // The moment it reaches to equal k, cout that number. 
    // If the jump goes from < to > k, then output -1.
    // Reaching the end? cout -1 as well

    int n, k; 
    cin >> n >> k;

    vi a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());

    if (n == 0) {
        cout << 1 << '\n';
        return 0;
    }
    if (k == 0 && a[0] == 1){
        cout << -1 << '\n';
        return 0;
    }
    
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        ++cnt;
        if (i+1 < n && a[i] == a[i+1]) continue;

        if (cnt > k) break;
        if (cnt == k) {
            cout << a[i] << '\n';
            return 0;
        }
    }
    cout << -1 << '\n';
    return 0;
}