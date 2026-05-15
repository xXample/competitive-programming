#include <bits/stdc++.h>
using namespace std;

bool isCoprime(long long a, long long b) {
    while (b != 0) {
        long long tmp = a;
        a = b;
        b = tmp % b;
    }
    return a == 1;
}

long long limit = pow(10, 18);

void solve() {
    int n;
    cin >> n;
    vector<long long> nums(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    for (long long x = 2; x <= limit; ++x) {
        for (int i = 0 ; i < n; ++i) {
            if (isCoprime(nums[i], x)) {
                cout << x << '\n';
                return;
            }
        }
    }
    cout << -1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
