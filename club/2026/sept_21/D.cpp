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
    ll n; 
    cin >> n;
    vll a(n);
    for (auto &i : a) cin >> i;
    for (int i = 0; i < n; ++i) a[i] -= i;
    sort(all(a));
    a.erase(unique(all(a)), a.end());
    int curr = 1, ans = 1;
    for (int i = 1; i < n; ++i) {
        curr = (a[i] == a[i-1] + 1) ? curr + 1 : 1;
        ans = max(curr, ans);
    }
    cout << ans << '\n';
}

/*
Given an array a. 
Given some i, j where i < j, notice that when we do the operation, 
indices 1->i-1 and j+1->n aren't affected. 
Elements a[i:j] are affected.
Element a[j] is reduced by (j-i) amount. 
Elements a[i:j] are +1. 
Also, a[j] is given a new index j - (j-i) = i. 
And, each k s.t. i ≤ k < j is given new index i+1. 

So for any operation, any given element will either gain +1 value, and gain an index value. 
Or that element will lose j-i index values and also reduce value by j-i. 

Therefore, no matter what operation occurs, each elements a[i] - i will remain the same, even as its index and a[i] value changes. 

Now, any flat section of length k, starting at index i, must be such that 
a[i+0] == a[i+1] == ... == a[i+k-1]
By the invariant, this means that 
now observe the invariant for each of these:
a[i] + 0, a[i+1] + 1, ..., a[i+k-1] + k-1

Thus, we find that the largest possible flat area must be the longest +1 increasing sequence. 

PROOF:
Let a be an array of lenght n. 
Let each element be given a quality a[i] - i. 
Recall the operation from earlier. 
The operation moves the element down indices by j-i amount, and reduces its value by j-i. 
Every element moves up by 1 index, and gains 1 in value. 
So at every operation, and element will gain some value, and lose an equal amount of index value. 
Thus each operation, an element's value a[i] - i will remain the same. 
We can move elements arbitrarily, by simply building the ordering we want from left to right. 

Now a flat section is such that a[i] == a[i+1] == ... == a[i+k-1].
Each element's invariant is a[i] - i, a[i+1] - (i+1), a[i+k-1] - (i+k-1)
Subtracting a[i] from them all, we get -i, -i-1, -i-k+1

Thus, the lagest possible flat section is such that each section's invariant goes down by 1 per step.
So we simply need to sort according to this key, and then find the largest possible construction of gradually descending slope (or ascending). 
QED.
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