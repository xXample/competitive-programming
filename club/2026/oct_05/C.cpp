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
    ll n, x;
    cin >> n >> x;
    vll a(n);
    for (auto &i : a) cin >> i;

    vll x_primes;

    ll i = 2;
    while (i*i <= x) {
        if (x % i == 0) {
            x_primes.push_back(i);
            while (x % i == 0) x /= i;
        }
        i++;
    }
    if (x > 1) x_primes.push_back(x);

    // if (x_primes.empty()) cout << "NONE";
    // else for (auto num : x_primes) cout << num << ' ';
    // cout << '\n';

    ll treasure_max = 0;
    for (ll div : x_primes) {
        ll treasure_curr = 0;
        for (ll i = 0; i < n; ++i) {
            if (a[i] % div == 0) {
                treasure_curr += a[i];
            }
        }
        treasure_max = max(treasure_curr, treasure_max);
    }
    cout << treasure_max << '\n';
}

/*
We have a bunch of coins in a bunch of piles.
We are also given a coin x. 
now, we can only grab g coins from a pile if (x, ai) > 1, and ai != 0. Also g = (ai, x)
Whenever we grab, we set x = g. 

It's easy to see that if (x, ai) > 1, then we can extract all the value from ai.
Similarly, if (x, ai) == 1, then we will never be able to extract any value from ai

Our main wall is that when we pick an ai to extract value, we're might block aj from being picked, because (ai, aj) = 1, even if x | ai and x | aj. 
In this way, it's like we're navigating a graph, and going down some paths mean leaving others. 
And we want to find the best path!!!

It seems easy to get a combinatorial explosion


-------

The only piles we can ever get, are those such that (x, ai) != 1
Keep in mind that x --> g1 -->g2 etc., where gi = (x, ai). 
Then, there is some last gk, where k is the number of piles we extract. 
Also, x ≥ g1 ≥ g2 ≥...≥ gk, and gk is a divisor of x, g1, etc. 
It's clear that there's some optimal gk, and gk is < x. 
Thus, we only need to consider the prime divisors of x. 
So for each prime divisor of x, check how much treasure we can get from each pile. 

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