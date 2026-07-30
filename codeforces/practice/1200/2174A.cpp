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
    string sub, full;
    cin >> sub >> full;

    string sub_sort = sub;
    sort(all(sub_sort));
    sort(all(full));

    string complement;
    string sub_new;
    int ptr = 0;
    for (int i = 0; i < full.size(); ++i) {
        if (ptr < sub.size() && full[i] == sub_sort[ptr]) {
            sub_new += full[i];
            ++ptr;
        }
        else {
            complement += full[i];
        }
    }

    if (sub_new != sub_sort) {
        cout << "Impossible\n";
        return;
    }

    // Merge sub & complement to create new string
    string full_new;
    int i = 0, j = 0;
    while (i < complement.size() || j < sub.size()) {
        if (i == complement.size()) {
            full_new += sub[j];
            ++j;
        }
        else if (j == sub.size()) {
            full_new += complement[i];
            ++i;
        }
        else if (complement[i] < sub[j]) {
            full_new += complement[i];
            ++i;
        }
        else {
            full_new += sub[j];
            ++j;
        }
    }
    cout << full_new << '\n';
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