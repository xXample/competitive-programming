#include <iostream> 
#include <vector> 
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string binary;
        cin >> binary;

        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (binary[i] == '1') {
                ++cnt;
            }
            else {
                cnt = 0;
            }
            if (cnt == k) {
                break;
            }
        }
        if (cnt == k) {
            cout << "No\n";
            continue;
        }
        cout << "Yes\n";

        int num = n;
        vector<int> permutation(n, 0);
        for (int i = 0; i < n; ++i) {
            if (binary[i] == '0') {
                permutation[i] = num--;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (binary[i] == '1') {
                permutation[i] = num--;
            }
        }
        for (int p : permutation) {
            cout << p << ' ';
        }
        cout << '\n';
    }
}