#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[j] == nums[i]) continue;
            int num = nums[j] % nums[i];
            if (num % 2 == 0) {
                cout << nums[i] << ' ' << nums[j] << '\n';
                return;
            }
        }
    }
    cout << "-1" << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}