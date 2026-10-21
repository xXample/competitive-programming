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
    string s; cin >> s;

    vi count(26, 0);
    for (int i = 0; i < n; ++i) {
        int letter = s[i] - 'a';
        ++count[letter];
    }

    int cnt_min = INF, cnt_max = -INF;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 0) continue;
        int letter = s[i] - 'a';
        cnt_min = min(count[letter], cnt_min);
        cnt_max = max(count[letter], cnt_max);
    }
    assert(cnt_min != INF && cnt_max != -INF);
    // cout << cnt_min << ' ' << cnt_max << '\n';

    char char_min = 'A', char_max = 'B'; 
    for (int i = 0; i < 26; ++i) {
        int letter = i;
        if (count[letter] == cnt_min) {
            char_min = letter + 'a';
            break;
        }
    }
    
    for (int i = 0; i < 26; ++i) {
        int letter = i;
        if (count[letter] == cnt_max) { 
            char_max = letter + 'a';
            // No break; to avoid dupe char_min char_max if possible
        }
    }

    for (int i = 0; i < n; ++i) {
        if (s[i] == char_min) {
            s[i] = char_max;
            break;
        }
        assert(i!=n-1);
    }

    cout << s << '\n';

    // N = n! / (c1! c2! ... cq!), where ci is the count a particular character, and q is the number of distinct characters
    // Pick some i, j s.t. ci -= 1, cj += 1 results in N decreasing the most. 
    // It's clear the best action is to do c_min -= 1, c_max += 1. 

    // Create a count array, find the smallest and largest one. 
    // do replacement.

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