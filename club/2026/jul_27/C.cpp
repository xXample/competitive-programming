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
    vi a(n);
    for (auto &i : a) cin >> i;
    int m; 
    cin >> m;
    vector<string> strings; 
    for (int i = 0; i < m; ++i) {
        string s;
        cin >> s;
        strings.push_back(s);
    }


    for (int i = 0; i < m; ++i) {
        string s = strings[i];
        if (s.size() != n) {
            cout << "NO\n";
            continue;
        }

        // Have unsorted map of s[i] to a[i]. 
        unordered_map<int, char> num2char; 
        unordered_map<char, int> char2num; 
        for (int j = 0; j < n; ++j) {
            int num = a[j];
            char cha = s[j];
            // if case not seen before, add case
            if (num2char.find(num) == num2char.end()) {
                num2char[num] = cha;
            }
            if (char2num.find(cha) == char2num.end()) {
                char2num[cha] = num;
            }
            // if map size exceeds 26, cout no
            const int NUM_LETTERS = 26;
            if (num2char.size() > NUM_LETTERS || char2num.size() > NUM_LETTERS) {
                cout << "NO\n";
                break;
            }
            // if conflict ever occurs, cout no
            if (num2char[num] != cha || char2num[cha] != num) {
                cout << "NO\n";
                break;
            }

            if (j == n-1) {
                cout << "YES\n";
                break;
            }
        }



        // for (int j = 0; j < n; ++j) {
        //     if (a[j] != s[j]) {
        //         cout << "NO\n";
        //         break;
        //     } else if (j == n-1) {
        //         cout << "YES\n";
        //     }
        // }
    }

    


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    // cout << ('b' - 'a' == 1 ? "true" : "false") << '\n';

    return 0;
}