#include <iostream> 
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> count(26, 0);
    string username;
    cin >> username;

    for (char c : username) {
        count[c - 'a'] = 1;
    }

    int ans = 0;
    for (int n : count) {
        if (n != 0) {
            ans++;
        }
    }

    cout << ((ans % 2 == 1) ? "IGNORE HIM!" : "CHAT WITH HER!") << '\n';
    
}   