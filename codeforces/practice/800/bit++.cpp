#include <iostream>
#include <string>
using namespace std;

int main() {
    int iter;
    cin >> iter;
    int res = 0;
    string statement;
    int idx = 0;
    for (int i = 0; i < iter; i++) {
        cin >> statement;
        if (statement[idx] == 'X') {
            idx++;
        }
        if (statement[idx] == '+') {
            res++;
        } else if (statement[idx] == '-') {
            res--;
        }
        idx = 0;
    }
    cout << res << endl;
    return 0;
}