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
    int k; 
    cin >> k;
    vi c(k);
    for (auto &i : c) cin >> i;

    int cnt_doubles = 0;
    for (auto i : c) {
        if (i == 2) ++cnt_doubles;
        if (i > 2 || cnt_doubles >= 2) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";



/*
Given some characters, can we construct an accepting string? 

A string is accepting IFF there exists i != j s.t. a[i] == a[j], a[i+1] == a[j+1]

WLOG, let i < j. 

My claim is if we have 3 of one character, or 2 of two characters, then we can construct an accepting string. 
Otherwise we cannot. 

Say we have 3 of one character. 
If we set these three characters next to each other in the string, then for some i
a[i] == a[i+1] == a[i+2]
Notice, if we let j = i+1, then a[i] == a[j], a[i+1] == a[j+1]

Say we have 2 of two different characters. Let c1 != c2 be our two characters. 
Then we can construct within our string, c1c2c1c2. 
Notice here that a[i] == a[i+2] and a[i+1] == a[i+3]
If we set j = i+2, then a[i] == a[j] and a[i+1] == a[j+1]

Now suppose there are not 3 of one character, and there are not two of two different characteres.
Then every possible string can have only one repeated character at most. 
Suppose there exists i < j s.t. a[i] == a[j], a[i+1] == a[j+1]
But since we have only one repeated character, and i < j, then we cannot have two equalities. 

Therefore, those two cases are sufficient to check all accepting cases. 





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