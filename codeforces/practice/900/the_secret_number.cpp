#include <iostream> 
#include <vector>
#include <ranges>
using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--) {
//         long long n;
//         cin >> n;

//         long long power = 10;
//         vector<long long> nums;

//         while (power + 1 <= n) {
//             if (n % (power+1) == 0) {
//                 nums.push_back(n / (power + 1));
//             }
//             power *= 10;
//         }
//         if (nums.size() == 0) {
//             cout << "0\n";
//             continue;
//         }
//         cout << nums.size() << "\n";

//         for (int i = nums.size() - 1; i >= 0; --i) {
//             cout << nums[i] << " ";
//         }
//         cout << "\n";
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while(t--) {
//         long long n;
//         cin >> n;
//         vector<long long> nums;
//         for (long long power = 10; power+1 <= n; power *= 10) {
//             if (n % (power+1) == 0) nums.push_back(n / (power+1));
//         }
//         cout << nums.size() << "\n";

//         if (nums.size() == 0) continue;

//         for (int i = nums.size() - 1; i >= 0; --i) {
//             cout << nums[i] << " ";
//         }
//         cout << "\n";
//     }
// }