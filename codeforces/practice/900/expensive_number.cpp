#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string num;
        cin >> num;
        int num_non_zero = 0;
        for (char c : num) {
            if (c != '0') {
                ++num_non_zero;
            }
        }
        int num_post_zeros = 0;
        for (int i = num.size() - 1; num[i] == '0'; --i) {
            ++num_post_zeros;
        }
        cout << num_non_zero + num_post_zeros  - 1 << '\n';
    }
}