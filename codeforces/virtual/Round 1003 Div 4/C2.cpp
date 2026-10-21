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

// Returns the smallest element of the array that is larger than the target.
// If all elements smaller than target, returns the largest element.
int bin_search(const vi& array, int target) {
    int low = 0, high = array.size() - 1;
    while (low < high) {
        int mid = (high + low) / 2; // bias toward lower
        if (array[mid] == target) return mid; // Return index of target
        
        else if (array[mid] < target) {
            low = mid+1;
        }
        else {
            high = mid;
        }
    } // Guarantee: low == high at end of loop.
    return high; // If target not found, then this is the larger than target, if such element exists.
}


void solve() {
    int n, m;
    cin >> n >> m;
    vi a(n), b(m);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    sort(all(b));


    a[0] = min(b[0] - a[0], a[0]);
    for (int i = 1; i < n; ++i) {
        /*
        Want bj s.t. bj - ai >= a[i-1], but bj-ai is minimized. 
        bj >= ai-1 + ai
        So we want the smallest bj >= ai-1 + ai. 
        */
        int idx = bin_search(b, a[i-1] + a[i]);
        int bj = b[idx];
        ll low = min(bj-a[i], a[i]);
        ll high = max(bj-a[i], a[i]);
        if (low >= a[i-1]) {
            a[i] = low;
        } else {
            a[i] = high;
        }
    }

    // Verify non-decreasing
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i+1]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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