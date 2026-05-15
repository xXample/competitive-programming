#include <iostream> 
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a = -1;
        for (int i = 0; i < n; ++i) {
            int num;
            cin >> num;

            a = max(a, num);
        }
        cout << a << '\n';
    }
}