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
    string s;
    cin >> s;

    int min_cost = INF;
    string final_ans(n, '0');

    for (int i = 0; i <= n; ++i) {
        string t = s;
        int cur_k = k;
        string cur_ans(n, '0');

        for (int j = 0; j < i; ++j) {
            if (t[j] == '(' && cur_k > 0) {
                t[j] = ')';
                cur_ans[j] = '1';
                --cur_k;
            }
        }

        for (int j = n-1; j >= i; --j) {
            if (t[j] == ')' && cur_k > 0) {
                t[j] = '(';
                cur_ans[j] = '1';
                --cur_k;
            }
        }

        int balance = 0;
        int cur_cost = 0;
        for (int j = 0; j < n; ++j) {
            if (t[j] == '(') {
                ++balance;
            }
            else if (t[j] == ')' && balance > 0) {
                --balance;
                cur_cost += 2;
            }
        }

        if (cur_cost < min_cost) {
            min_cost = cur_cost;
            final_ans = cur_ans;
        }
    }
    cout << final_ans << '\n';

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