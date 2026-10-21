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



}

/*
1s are free if they're at the ends of the array. 
Blocks at the ends are free. 
if cnt_a[i] < a[i], then that block cannot be used... remove it post-haste!

3233222
3 + 2 + 2
3 VS 4... ACTUALLY 5 vs 4

The solution is not to reduce it to a bunch of possible blocks, and then figure out which inconsistent ones to remove. 
I have to do something else. 

The problem reduces to a simpler one. 
I KNOW that answer is <= n.
if the answer is n, this is evident, and we're done. 
If the answer is n-1, the answer is also evident, and we're done (all but one element is the same, and they're all n-1)
If the answer is n-2, the answer is... sort evident. 

A large array with 1 value dominating the population... this is clear. 

Can I determine if the first element is in the array or not? 

Read the number value. Try to read off a section. If done, add to total. If reach end, don't. 
If you're not done, and you "run into" a number... you must decide to keep it or not. 

*/



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