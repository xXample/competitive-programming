#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> permutation(2*n, -1);
        vector<bool> visit(2*n+1, false);
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                int number;
                cin >> number;
                permutation[i+j-1] = number;
                visit[number] = true;
            }
        }
        
        for (int i = 0; i < 2*n; ++i) {
            if (permutation[i] != -1) {
                cout << permutation[i] << " ";
                continue;
            } 
            
            for (int j = 1; j <= 2*n; ++j) {
                if (visit[j] == false) {
                    cout << j << " ";
                    break;
                }
            }
        }
        cout << '\n';
    }
}
