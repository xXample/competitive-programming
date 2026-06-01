#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve() {
    int n; 
    cin >> n;

    int odd = 1;
    cout << odd << ' ';

    for (int i = 1; i < n; ++i) {
        cout << odd * (odd + 2) << ' ';
        odd += 2;
    }
    cout << '\n';
    
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
