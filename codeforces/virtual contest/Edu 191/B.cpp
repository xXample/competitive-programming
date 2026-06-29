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
    int n;
    cin >> n;
    if (n % 2 == 0) {
        for (int i = 1; i <= n-1; i += 2) {
            int first = i, second = i+1;
            cout << first << ' ' << second << ' ' << 
                    first << ' ' << first << ' ' << 
                    second << ' ' << second << ' ' << 
                    first << ' ' << second << ' ';
        }
    }
    else {
        int first = 1, second = 2, third = 3;
        cout << first << ' ' << first << ' ' << 
                second << ' ' << first << ' ' << 
                second << ' ' << third << ' ' << 
                first << ' ' << third << ' ' <<
                second << ' ' << second << ' ' <<
                third << ' ' << third << ' ';        
        for (int i = 4; i <= n-1; i += 2) {
            int first = i, second = i+1;
            cout << first << ' ' << second << ' ' << 
                    first << ' ' << first << ' ' << 
                    second << ' ' << second << ' ' << 
                    first << ' ' << second << ' ';
        }
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