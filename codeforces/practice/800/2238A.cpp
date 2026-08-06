#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n, c;
    cin >> n >> c;
    vi a(n), b(n);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;

    int total_diff = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < b[i]) {
            total_diff = -1;
            break;
        }
        total_diff += a[i] - b[i];
    }

    if (total_diff != -1) {
        cout << total_diff << '\n';
        return;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    total_diff = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < b[i]) {
            total_diff = -1;
            break;
        }
        total_diff += a[i] - b[i];
        if (i == n-1) total_diff += c;
    }


    cout << total_diff << '\n';

    

    // Try getting solution without any sorting. If this works, output total difference and return. 
    // Otherwise, sort array. If no solution exists, output -1. Otherwise, output total difference and return.

    // Justification: 
    // If we sort the array, and there does not exist a solution, then there will never be a solution. 
    // There exists a way IFF there is a configuration s.t for all i, a[i] >= b[i].
    // Now, the smallest a[i] must be as large as the smallest b[i]. And so on to the largest. 
    
    // Now, If a1 <= a2, and b1 <= b2, then (a1-b1) + (a2-b2) == (a1-b2)+(a2-b1)
    // Thus, any valid ordering will take an equal amount of time. 
    // Thus, all that matters is if we need to sort or not, assuming a valid solution exists.
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