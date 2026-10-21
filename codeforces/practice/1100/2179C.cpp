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
    vi a(n); for (auto &i : a) cin >> i;
    
    sort(all(a));
    int k = max(a[0], a[1] - a[0]);
    cout << k << '\n';

    /*
    This solution here is a worse time complexity. 
    However, it is much more elegant, and thus better.
    Since we sort, we only need to check if, for i=1, if a[min] ≤ a[i] - a[min]
    */




















    // // Get the minimum value
    // int min_val = INF;
    // for (auto i : a) {
    //     min_val = min(i, min_val);
    // }
    
    // // Find the largest k such that for all i s.t. a[i]!=a[min], k ≤ a[i] - a[min] 
    // int k = INF;
    // for (auto i : a) {
    //     if (i != min_val) {
    //         k = min(k, i - min_val);
    //     }
    // }
    // if (k == INF || k < min_val) {
    //     cout << min_val << '\n';
    // }
    // else {
    //     cout << k << '\n';
    // }


/*
5 7 9
we convert all to 0. So mod 5 is the "maximum" k. 

11 74 5 22 52 97 82
We convert them all to 5. By sorting, we get 
5 11 22 52 74 82 97

 5 == 5 mod 6
11 == 5 mod 6
22 == 5 mod 17
52 == 5 mod 47
74 == 5 mod 69

The question: How to determine the smallest x in this series? And how can we maximize it? 
Find k such that k is maximzed, x ≥ k, and a[i] mod x for all i results in an array where all elements are the same? 

Now, k is ≥ a[min], where a[min] is smallest of a
when is k > a[min]? 
Let a[min] == c (mod k)
Check if for all i, a[i] - c >= k.
    11 - 5 == 6 >= 6
    22 - 5 == 17 >= 6
Generalization: For a[min] == c (mod k), if for all i, and some c, a[i] - c >= k, then k is valid. 
PROOF:
Let a[min] == c (mod k), and for all i, a[i] - c >= k. 
Then a[i] - c >= 0 (mod k)
Therefore, there exists an x ≥ k s.t. a[i] - c == 0 (mod x). 
And so, for all i, there exists an x ≥ k such that a[i] == c (mod k). QED

Why do we need a[min] == c (mod k)? 
Well, a[min] == c (mod k) is necessary for SOME c, k. 

BETTER GENERALIZATION
For all i != min, let k <= a[i]. 
Let for all i, and some c < k, that a[i] - c >= k
Then for all i, there exists an x ≥ k such that a[i] == c (mod x). 
PROOF
(i) 
k must be greater than at most one a[i] in a. 
If k is greater than a[i] != a[j] in a, then operations would never change their values. 
Since for all i != min, that k <= a[i], then at most one a[i] is less than k. 

(ii)
Now, let a[i] - c >= k. 
Then a[i] - c >= 0 (mod k).
Thus, a[i] >= c (mod k)


---------------------------------------
We know k >= a[min]. 
I then want to know is how far can k go past a[min]. 
k >= a[min] + 1 if for a[min] == a[min] (mod a[min] + 1), 
and a[i] == a[min] (mod a[min] + 1 or higher).

So, I suppose the REAL question is... can we make a[i] == a[min] modulo x > a[min]

Idea:
Check each a[i] != a[min] what modulo is needed for a[i] == a[min]. 
Observe: a[i] == a[min] (mod x) ==> x | a[i] - a[min].

Algorithm:
Find smallest a[i] of a. Call min.
For all i = 1...n, 
    a[i] = a[i] - min
If all a[i] < min, return min. 
Else return smallest a[i] > 0. 
I.E. return smallest a[i] that's >= min. 
val = INF
for i = 1... n
    if a[i] > min and val = min(val, a[i])

PROOF
Suppose the largest possible value is greater than a[min]. 
Then the value of each a[i] must end up being a[min].
Thus, for x ≥ k, that a[i] == a[min] (mod x) ==> k ≤ x | a[i] - a[min].
Notice for all c, c | c
Thus if k ≤ a[i] - a[min], there exists a valid x.

Now for all k > a[min], that a[min] == a[min] (mod k). 
Also note for a[i] != a[min], that a[i] must be larger or equal to k. 
If a[i] < k, then a[i] == a[i] (mod x) for all x >= k.
Thus, we need only find the smallest k == a[i].

------------------

The key insight is that the value of the whole array must either be "0" or "a[min]".
So simply subtract all elements by a[min] since we want to know what k ≤ x | a[i] - a[min] <==> a[i] == a[min] (mod x ≥ k)
This reduces to simply figuring out if k ≤ a[i] - a[min]. 
So we simply want to find the largest k such that k ≤ a[i] - a[min], for all i. 
(Excluding when a[i] == a[min]. In that case, a[min] == a[min] (modulo ANY K))
If all elements are now < a[min], that tells you there doesn't exists x ≥ k such that x | a[i] - a[min]. 

Ok it's hard for this to sit intuitively, which is amazing I somehow pulled it outta my ass. 




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