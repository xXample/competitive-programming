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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    string s; cin >> s;
    vi freq(676, 0);
    // AA, AB, AC, ..., AZ, BA, BB, BC, ..., BZ, CA, ........ ZA, ZB, ..., ZY, ZZ
    // 0,   1, 2,        25, 26, 27, 28, ..., 51, 52

    for (int i = 0; i < n-1; ++i) {
        int val = 26*(s[i] - 'A') + (s[i+1] - 'A');
        ++freq[val];
    }

    int max_freq = -1;
    int max_val = -1;
    for (int i = 0; i < freq.size(); ++i) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_val = i;
        }
    }

    char c1 = (max_val / 26) + 'A';
    char c2 = (max_val % 26) + 'A';
    cout << c1 << c2 << '\n';



    // char A = 'A';
    // int A_int = A;
    // cout << A_int << '\n';
    // char Z = 'Z';
    // int Z_int = Z;
    // cout << Z_int << '\n';

    return 0;
}