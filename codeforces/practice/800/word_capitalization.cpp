#include <bits/stdc++.h>
using namespace std;

int main() {
	string word;
	cin >> word;
	if (word[0] >= 97) word[0] -= 32;
	cout << word;
}
