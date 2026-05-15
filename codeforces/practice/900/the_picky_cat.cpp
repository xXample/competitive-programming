#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t;
    while (t--) {
        int n, num;
        cin >> n >> num;
        num = abs(num);
        int cnt_lower = 0;
        for (int i = 1; i < n; ++i) {
            int element;
            cin >> element;
            if (abs(element) < num) ++cnt_lower;
        }
        if (2*cnt_lower <= n) {
            cout << "YES\n"; 
        }
        else {
            cout << "NO\n";
        }
    }
}