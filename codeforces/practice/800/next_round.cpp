#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;

    int cnt = 0;
    int contest[n];
    for (int i = 0; i < n; ++i) {
        cin >> contest[i];
        if (contest[i] != 0 and i <= k-1) ++cnt;
    }
    for (int i = k-1; i < n-1; ++i) {
        if (contest[i] == 0) break;
        if (contest[i] != contest[i+1]) break;
        if (contest[i] == contest[i+1]) ++cnt;
    }
    cout << cnt << '\n';
}