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
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;

    for (int i = 0; i < t; ++i) {
        string s; 
        cin >> s;
        if (s.size() < 3) {
            cout << "NO\n";
            continue;
        }
        if (s[0] != '1' || s[1] != '0' || s[2] == '0') {
            cout << "NO\n";
            continue;
        }
        if (s.size() == 3 && s[2] == '1') {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }

    return 0;
}