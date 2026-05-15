#include <iostream>

using namespace std;

int main() {
    int iter;
    cin >> iter;
    int a, b, c;
    int res = 0;
    for (int i = 0; i < iter; i++) {
        cin >> a >> b >> c;
        if (a + b + c >= 2) {
            res += 1;
        }
    }
    cout << res << endl;
    return 0;
}