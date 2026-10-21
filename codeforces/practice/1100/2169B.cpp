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
    string s; 
    cin >> s;
    int n = s.size();

    // for (int i = 0; i < n-1; ++i) {
    //     if (s[i] == '*' && s[i+1] == '*') {
    //         cout << -1 << '\n';
    //         return;
    //     }
    // }
    
    // int right_arrow = INF;
    // for (int i = 0; i < n; ++i) {
    //     if (s[i] == '>') {
    //         right_arrow = i;
    //         break;
    //     }
    // }
    // int left_arrow = -INF;
    // for (int i = n-1; i >= 0; --i) {
    //     if (s[i] == '<') {
    //         left_arrow = i;
    //         break;
    //     }
    // }
    // if (right_arrow < left_arrow) {
    //     cout << -1 << '\n';
    //     return;
    // }

    // int star_min = INF, star_max = -INF;
    // for (int i = 0; i < n; ++i) {
    //     if (s[i] == '*') {
    //         star_min = min(star_min, i);
    //         star_max = max(star_max, i);
    //     }
    // }
    // if (star_min < left_arrow || right_arrow < star_max) {
    //     cout << -1 << '\n';
    //     return;
    // }





    bool sequential_stars = false;
    int left_arrow = -INF;
    int right_arrow = INF;
    int star_min = INF;
    int star_max = -INF;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '*') {
            star_min = min(star_min, i);
            star_max = max(star_max, i);
            if (i < s.size() - 1 && s[i] == s[i+1]) {
                sequential_stars = true;
            }
        }
        else if (s[i] == '<') {
            left_arrow = max(left_arrow, i);
        }
        else {
            right_arrow = min(right_arrow, i);
        }    
    }
    if (sequential_stars || right_arrow < left_arrow || star_min < left_arrow || right_arrow < star_max) {
        cout << -1 << '\n';
        return;
    }
    
    int left_ans = 0;
    int right_ans = 0;
    for (int i = 0; i < s.size() && s[i] != '>'; ++i) ++left_ans;
    for (int i = n-1; i >= 0 && s[i] != '<'; --i) ++right_ans;
    cout << max(left_ans, right_ans) << '\n';
}

/*
Ok, so umm. 
We need to decide what the maximum amount of time can be spent in the river. 

Now, for i < j, if s[i] == '>' and s[j] == '<', then it should be infinite? 
Or, if s[i] == '>' and s[j] == '*', then it should be infinite? And vice-versa. 
So if two arrows point to each other, or an arrow points to a *, then it's infinite. 
If two * exist next to each other, then one can simply go between the two. 
Suppose that's not true? No arrows point to each other, and no arrow points to a *, and no two * exist next to each other. 
If we start on an arrow, then it will lead us to the shore, since no arrow points an opposing arrow, nor a star. 
If we start on a star, then any step will lead us to shore, or to an arrow, which will lead us to the shore. 

So it's infinite if there exists i < j s.t. s[i] == '>' and s[j] == '<', or an arrow points to a star, or two stars exist next to each other.
Barring that, then it must be finite. 
Since each path is finite, we can simply "travel up" until we cannot anymore — that is our maximum point, and try both sides.
    Since it's finite, we will never visit the same point twice (otherwise we could just do that cycle forever).


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