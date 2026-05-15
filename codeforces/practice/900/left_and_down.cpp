#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, k;
        cin >> a >> b >> k;
        long long d = gcd(a, b);
        a /= d;
        b /= d;

        if (a > k || b > k) cout << "2\n";
        else cout << "1\n";
    }
}
