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
    int n; cin >>  n;
    string a; cin >> a;
    string b; cin >> b;

    int num_0s_a = 0;
    int num_0s_b = 0;
    for (int i = 0; i < n; i+=2) {
        if (a[i] == '0') ++num_0s_a;
        if (b[i] == '0') ++num_0s_b;
    }
    if (num_0s_a != num_0s_b) {
        cout << "NO\n";
        return;
    }

    num_0s_a = 0;
    num_0s_b = 0;
    for (int i = 1; i < n; i+=2) {
        if (a[i] == '0') ++num_0s_a;
        if (b[i] == '0') ++num_0s_b;
    }
    if (num_0s_a != num_0s_b) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    return;
    

    // All relevent substrings: (a0 != a2 && (a1 == a0 || a1 == a2))
    // If a == b, output YES
    // If #of of 0s and 1s differ, output NO
    // If no relevant subtring exists in a or b, output NO
    
    // If I can "sort" a and b, such that they end up the same "easily", we're done
    // This claim wasn't true, at least how I thought of easily. 
    // Maybe there's a different easy

    // Claim: If I try to move the rightmost 1s to be leftmost, I reach this state is one pass
    // 00000111
    // Claim false

    // Claim: We need only check if the first, second, and third indexes (mod 3) of a & b are the same
    // This is wrong

    // I will stop entertaining sorts. There must be a simpler way to do it
    // I will start thinking of sorts again.

    // Claim: We can move groups of 2 freely


    // 
/*

6
001011
000111

7
0000111
0000111

7
00001011
00001011

We can get rid of subgroups

10101000011

1101


*/








    

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