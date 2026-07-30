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

// /* Backtracking algorithm: Permutations I */
// void backtrack(vector<int> &state, const vector<int> &choices, vector<bool> &selected, vector<vector<int>> &res) {
//     // When the state length equals the number of elements, record the solution
//     if (state.size() == choices.size()) {
//         res.push_back(state);
//         return;
//     }
//     // Traverse all choices
//     for (int i = 0; i < choices.size(); i++) {
//         int choice = choices[i];
//         // Pruning: do not allow repeated selection of elements
//         if (!selected[i]) {
//             // Attempt: make choice, update state
//             selected[i] = true;
//             state.push_back(choice);
//             // Proceed to the next round of selection
//             backtrack(state, choices, selected, res);
//             // Backtrack: undo choice, restore to previous state
//             selected[i] = false;
//             state.pop_back();
//         }
//     }
// }

// /* Permutations I */
// vector<vector<int>> permutationsI(vector<int> nums) {
//     vector<int> state;
//     vector<bool> selected(nums.size(), false);
//     vector<vector<int>> res;
//     backtrack(state, nums, selected, res);
//     return res;
// }


// void solve() {
//     int n, j, k;
//     cin >> n >> j >> k;
//     // Obtain correct permutation
//     vi elements;
//     while (n != 0) {
//         elements.push_back(n%10);
//         n /= 10;
//     }
//     vector<vi> perms = permutationsI(elements);
//     sort(all(perms));

//     vi lis1 = perms[j-1];
//     vi lis2 = perms[k-1];

//     int A = 0, B = 0;
//     for (int i = 0; i < elements.size(); ++i) {
//         if (lis1[i] == lis2[i]) ++A;
//         else ++B;
//     }
//     cout << A << "A" << B << "B" << '\n';

// }

void solve() {
    int n, j, k;
    cin >> n >> j >> k;
    // Obtain correct permutation
    vi elements;
    while (n != 0) {
        elements.push_back(n%10);
        n /= 10;
    }
    reverse(all(elements));
    vi lisj, lisk;
    int idx = 1;
    for (;idx < min(j, k); ++idx) {
        next_permutation(all(elements));
    }
    lisj = elements;
    for (;idx < max(j, k); ++idx) {
        next_permutation(all(elements));
    }
    lisk = elements;

    int A = 0, B = 0;
    for (int i = 0; i < elements.size(); ++i) {
        if (lisj[i] == lisk[i]) ++A;
        else ++B;
    }
    cout << A << "A" << B << "B" << '\n';

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