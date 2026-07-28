/*
w x h x d = volume
We want everyone to have an equal volume of cake. 
So first of all, if volume % n != 0 then return -1

How to cut a cake into n equally sized pieces? 
I mean we could pretend to cut it into whd pieces, and then meld everything back together? 
But that seems weird, adhoc. Bad

piece = volume / n;
if some prime factors of volume multiply into piece, then we win! 

Those divisors can "divide" the cake! Huzzah. 

volume = whd;
piece = whd / n;
Get prime factors of n
    try to divide each one into w, h, or d. If I do, hurrah, multiply that into the amount of divisions we're doing. 


We are given the dimensions of a cake in whd. 
We are to cut it into n pieces, or say it's impossible. 
If possible, answer by saying how many cuts to make along each dimension. 

If n is a prime, it's only possible if along some dimension, n | said dimension. 
width = 10, height = 20, depth = 37. 
n = 37 * 5 * 2. 
Then we make 4 x 0 x 36 cuts

Our formula is such: 
*/

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

vector<long long> trial_division1(long long n) {
    vector<long long> factorization;
    for (long long d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}


void solve() {
    int w, h, d, n;
    cin >> w >> h >> d >> n;

    vector<ll> primes = trial_division1(n);
    int wc = 1, hc = 1, dc = 1;
    for (auto p : primes) {
        if (w % p == 0)  {
            wc *= p;
            w /= p;
        } else if (h % p == 0) {
            hc *= p;
            h /= p;
        } else if (d % p == 0) {
            dc *= p;
            d /= p;
        } else {
            cout << -1 << '\n';
            return;
        }
    }

    // cout << w << ' ' << h << ' ' << d << '\n';
    cout << wc-1 << ' ' << hc-1 << ' ' << dc-1 << '\n';

    /*
    10 20 6
    40

    wc = 2*5 - 1 = 9
    hc = 2*2 - 1 = 3
    wc = 1      = 1

    40 = 2^3 * 5

    */
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}