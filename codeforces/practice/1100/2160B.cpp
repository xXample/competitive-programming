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
    vll b(n+1, 0);
    for (int i = 1; i <= n; ++i) cin >> b[i];
    vll a(n+1, 1);
    
    ll new_num = 2;
    for (ll i = 2; i <= n; ++i) {
        ll c = i - (b[i] - b[i-1]);
        if (c >= 1) {
            a[i] = a[c];
        } else {
            a[i] = new_num;
            new_num++;
        }
    }

    for (ll i = 1; i <= n; ++i) {
        cout << a[i] << " \n"[i==n];
    }
}

/*
a = 1 1 1 1 1 1 1
b = 1 2 3 4 5 6 7 

a = 1 2 3 4 5 6 7 
b = 1 3 6 10 

What to do now with my life???

b1 will always be {1}
b2 will alway be {2, 3}
b3 will always be {3, 4, 5, 6}
b4 will always be {4, 5, 6, 7, 8, 9, 10}

b = 1 2 3 7
a = 1 1 1 1

2 - 1 = 1
3 -2 - 1 = 1
7 - 3 - 2 - 1 = 1

Property: <- this is NOT true... what am i on about
b1 = 1
bi = b1 + b2 + ... + bi-1 + 1

b = 1 2 3 7
a = 1 1 1 2

b = 1 3 6

There's some property I'm not seeing
Think differently. 

Given some random array a, we define an equal sized b such that
b1 = f(a[1, 1])
b2 = f(a[1, 2]) + f(a[2, 2])
b3 = f(a[1, 3]) + f(a[2, 3]) + f(a[3, 3])
...
bi = f(a[1, i]) + f(a[2, i]) + ... + f(a[i, i])

So we cannot (at least naively) derive the value of bi from bj. We have to use a... sort of. 
b1 = 1, since its size 1.
b2 can be 2 or 3, since either there's 

b1 = 1
b2 - 1 == the number of unique elements in a1, a2
b3 - 2 == the number of unique elements in a1, a2, a3 <-- conjecture
b4 - 3 == the number of unique elements in a1, a2, a3, a4 <-- conjecture

a = 4 4 4 1 4
b = 1 2 3 7 8
b1 = 1
b2 - 1 == 1 == f(a1, a2)
b3 - 2 == 1 == f(a1, a2, a3)
b4 - 3 == 7 - 3 == 4 

.....

How about a --> b cacluations?
This is also pretty complicated, but probably straightforward.
Have a "seen" count, and then a variable for the number of unique numbers in an array.
This will let you calcualte the amount for bi. 
This would take O(n^2) time though, which is too long.

I KNOW there's some way around this.

b1 = f(a[1, 1])
b2 = f(a[1, 2]) + f(a[2, 2])
b3 = f(a[1, 3]) + f(a[2, 3]) + f(a[3, 3])
...
bi = f(a[1, i]) + f(a[2, i]) + ... + f(a[i, i])

bi - bi-1 = f(a[1, i]) + f(a[2, i]) + ... + f(a[i, i])
          -( f(a[1, i-1]) + f(a[2, i-1]) + f(a[3, i-1]) + ... + f(a[i-1, i-1]))
          = f(a[1, i]) - f(a[1, i-1])
          + f(a[2, i]) - f(a[2, i-1])


<Looks up solution>

f(l, i) == f(l, i-1) if ai is in a[l, i-1]
else f(l, i) + 1 == f(l, i-1)

Thus, bi - bi will be "identical" on the lower end. Eventually however, ai will not be in the array. 
At that point, we need to "add 1" to it. 

------ More thinking ------

In the end, I worked it out on paper. 
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