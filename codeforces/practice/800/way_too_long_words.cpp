#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    for (n; n > 0; n--) {
        cin >> str;
        if (str.size() <= 10) {
            cout << str << endl;
            continue;
        }
        cout << str[0] << str.size() - 2 << str[str.size() - 1] << endl;
    }
    return 0;
}