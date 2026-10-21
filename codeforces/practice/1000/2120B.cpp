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
    int n, s;
    cin >> n >> s;
    vi dx(n), dy(n), x(n), y(n);
    for (int i = 0; i < n; ++i) {
        cin >> dx[i] >> dy[i] >> x[i] >> y[i];
    }   

    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        bool pos_diag = x[i] == y[i];
        bool neg_diag = x[i] + y[i] == s;
        if (pos_diag && dx[i] == dy[i]) ++cnt;
        else if (neg_diag && dx[i] != dy[i]) ++cnt;
    }

    cout << cnt << '\n';
}

/*
Algorithm:
If ball on positive diagonal and direction is dx, dy = 1, 1 OR -1, -1, add to count
Else if ball on negative diagonal and direction is dx, dy = -1, 1 OR 1, -1, add to count
return count

PROOF

If dx == dy OR dx+dy == s, then it's on a diagonal.
dx == dy is true because it spans all points from (0, 0) to (s, s).
dx + dy == s is true because it spans (0, s) to (s, 0). 
Any other point cannot have these properties. 

Now suppose a ball is on a diagonal. If it is not going directly toward a pocket, and it never collides with another ball, it will never pocket. 
This is because the ball bounces off walls at 90 degrees. So we can construct the path of the ball with another square/rectangle. 
Of course, the square/rectangle must either reach all the corners, or none of them! <-- good enough of a proof?

Corrollary: Any ball not going directly toward a pocket will never hit said pocket (assuming no collisiions).
But if it is going directly toward a pocket, and never collides with another ball, then it will definitely reach the pocket.

Suppose two balls were going directly toward some pocket, and they collide beforehand.
By observation, they can only collide head-on, or in the middle of the square. Head-on, they rotate 180 degrees. Side-by-side in the middle, they still go toward a pocket.
So the number of balls enterig pockets doesn't change.

Suppose one ball goes to a pocket, and the other doesn't. 
Since one ball isn't going toward a pocket, then it must be a side-by-side collision. 
Also, since balls are going at 45 degree angles, the non-pocket ball cannot collide with the original ball within the centre. 
Therefore, the non-pocket ball becomes a pocket ball, and vice-versa. 

Suppose two balls don't go to a pocket and collide.
They must collide at a diagnoal if they were to end up going to a pocket.
But, this is only possible if they collide head on, which doesn't make them face a pocket.

Therefore, we only need to count the number of balls on diagonals that are going toward pockets. 

output the number

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