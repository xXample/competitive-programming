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
    int n, k, p, m;
    cin >> n >> k >> p >> m;
    vi full_deck(n);
    for (auto &i : full_deck) cin >> i;

    // Calculate cost to get first win-condition
    int initial_cost = full_deck[p-1];
    if (p > k) {
        vi before(full_deck.begin(), full_deck.begin() + p-1);
        sort(all(before));
        for (int i = 0; i < p-k; ++i) initial_cost += before[i];
    }

    if (initial_cost > m) {
        cout << 0 << '\n';
        return;
    }

    // Calculate cost to get each subsequent win-condition
    int cycle_cost = full_deck[p-1];
    vi after; after.reserve(n-1);
    for (int i = 0; i < n; ++i) 
        if (i != p-1) after.push_back(full_deck[i]);
    sort(all(after));
    for (int i = 0; i < n-k; ++i) cycle_cost += after[i];

    cout << 1 + (m - initial_cost) / (cycle_cost) << '\n';
}

// void solve() {
//     int n, k, p, m;
//     cin >> n >> k >> p >> m;
//     vi full_deck(n);
//     for (auto &i : full_deck) cin >> i;

//     // Calculate cost to get first win-condition
//     priority_queue<int, vi, greater<int>> hand;
//     int initial_cost = full_deck[p-1];
//     for (int i = 0; i < k; ++i) hand.push(full_deck[i]);
//     for (int i = k; i < p; ++i) {
//         initial_cost += hand.top(); 
//         hand.pop();
//         hand.push(full_deck[i]); 
//     }
//     // cout << initial_cost << '\n';
//     // return;

//     if (initial_cost > m) {
//         cout << 0 << '\n';
//         return;
//     }

//     // Calculate cost to get each subsequent win-condition
//     hand = priority_queue<int, vi, greater<int>>();
//     int cycle_cost = full_deck[p-1];
//     for (int i = 0; i < n; ++i) {
//         if (i != p-1) hand.push(full_deck[i]);
//     }
//     for (int i = 0; i < n-k; ++i) {
//         cycle_cost += hand.top();
//         hand.pop();
//     }

//     cout << 1 + (m - initial_cost) / (cycle_cost) << '\n';
// }


// void solve() {
//     int n, k, p, m;
//     cin >> n >> k >> p >> m;

//     vi full_deck(n);
//     for (auto &i : full_deck) cin >> i;
//     int win_cost = full_deck[p-1];
//     full_deck[p-1] = -1;

//     if (n == k || win_cost > m) {
//         cout << m / win_cost << '\n';
//         return;
//     } 
    
//     priority_queue<int, vi, greater<int>> hand;
//     deque<int> deck;
//     for (int i = 0; i < k; ++i) hand.push(full_deck[i]);
//     for (int i = k; i < n; ++i) deck.push_back(full_deck[i]);
    
//     int num_wins = 0;
//     while (m >= win_cost) {
//         int card_cost = hand.top(); hand.pop();

//         if (card_cost == -1) {
//             m -= win_cost;
//             ++num_wins;
//         } else {
//             m -= card_cost;
//         }

//         deck.push_back(card_cost);
//         int new_card = deck.front(); deck.pop_front();
//         hand.push(new_card);
//     }

//     cout << num_wins << '\n';
// }

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