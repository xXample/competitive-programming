#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int cnt = 0;
        bool found = false;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                ++cnt;
            } else {
                --cnt;
            }
            if (cnt == 0 and i < s.size() - 1) {
                found = true;
            } 
        }
        if (found) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }        
    }
}