#include <iostream>

using namespace std;

int main() {
    for (int row = 0; row < 5; ++row) {
        for (int col = 0; col < 5; ++col) {
            int num; cin >> num;
            if (num == 1) {
                cout << abs(row - 2) + abs(col - 2) << "\n";
                return 0;
            }
        }
    }
}