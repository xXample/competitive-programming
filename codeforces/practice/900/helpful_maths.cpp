#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string summation;
    cin >> summation;
    vector<int> numbers;
    for (int i = 0; i < summation.size(); ++i) {
        if (summation[i] == '1' or summation[i] == '2' or summation[i] == '3') {
            numbers.push_back((int)summation[i]);
        }
    }
    sort(numbers.begin(), numbers.end());

    cout << (char)numbers[0];
    for (int i = 1; i < numbers.size(); ++i) {
        cout << "+" << (char)numbers[i];
    }
    cout << '\n';
}