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
    int n; cin >> n;
    int zeros = 0, ones = 0, two2five = 0, six2nine = 0;
    for (int i = 0; i < n; ++i) {
        char c;
        cin >> c;
        if (c == '0') ++zeros;
        else if (c == '1') ++ones;
        else if ('2' <= c && c <= '5') ++two2five;
        else ++six2nine;
    }

    int cnt = 0;
    while (zeros > 0 || ones > 1) {
        int zero = 0, one = 0, two = 0, six = 0;
        if (zeros > 0) {
            ++zero;
            
            if (two2five > two) ++two;
            else if (ones > one) ++one;
            else if (zeros > zero) ++zero;
            else break;
    
            if (six2nine > six) ++six;
            else if (two2five > two) ++two;
            else if (ones > one) ++one;
            else if (zeros > zero) ++zero;
            else break;
    
            if (six2nine > six) ++six;
            else if (two2five > two) ++two;
            else if (ones > one) ++one;
            else if (zeros > zero) ++zero;
            else break;
    
            ++cnt;
            zeros -= zero;
            ones -= one;
            two2five -= two;
            six2nine -= six;
        }
        else {
            one += 2;

            if (two2five > two) ++two;
            else if (ones > one) ++one;
            else if (zeros > zero) ++zero;
            else break;

            if (six2nine > six) ++six;
            else if (two2five > two) ++two;
            else if (ones > one) ++one;
            else if (zeros > zero) ++zero;
            else break;

            ++cnt;
            zeros -= zero;
            ones -= one;
            two2five -= two;
            six2nine -= six;

        }
    }

    cout << cnt << '\n';

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