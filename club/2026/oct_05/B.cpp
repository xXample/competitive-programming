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

using namespace std;

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

void solve() {
    int n;
    cin >> n;
    vi count(100 + 1, 0);

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        ++count[val];
    }

    while (true) {
        bool end_program = true;
        for (int val = 100; val > 0; --val) {
            if (count[val] == 0) continue;
            cout << val << ' ';
            count[val]--;
            end_program = false;
        }
        if (end_program) break;
    }
    
    // while (true){
    //     // Get mode & mode_count
    //     int mode = -1, mode_count = -1;
    //     for (int i = n; i > 0; --i) {
    //         if (count[i] > 0) {
    //             mode = i;
    //             mode_count = count[i] + spent[i];
    //             break;
    //         }
    //     }
    //     if (mode == -1) break;

    //     // Expound numbers
    //     for (int val = mode; val > 0; --val) {
    //         for (int counter = 0; counter < mode_count; ++counter) {
    //             if (count[val] == 0) break;
    //             if (spent[val] == mode_count) break;
    //             cout << val << ' ';
    //             --count[val];
    //             ++spent[val];
    //         }
    //     }
    // }

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