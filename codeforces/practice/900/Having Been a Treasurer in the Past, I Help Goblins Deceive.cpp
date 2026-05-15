#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        long long cnt_mid = 0, cnt_low = 0;
        for (char c : s) {
            if (c == '-') ++cnt_mid;
            else ++cnt_low;
        }
        long long half = cnt_mid >> 1;
        cout << half * (cnt_mid - half) * cnt_low << '\n';
    }
}