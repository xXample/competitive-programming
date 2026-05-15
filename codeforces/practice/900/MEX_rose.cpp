#include <iostream> 
#include <algorithm>
#include <vector> 
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; 
        cin >> n >> k;

        int count_k = 0;
        vector<int> numbers(n+1, 0);
        
        for (int i = 0; i < n; ++i) {
            int x; 
            cin >> x;
            numbers[x] = 1;
            if (x == k) ++count_k;
        }

        int skipped = 0;
        for (int i = 0; i < k; ++i) {
            if (!numbers[i]) ++skipped;
        }

        cout << max(skipped, count_k) << '\n';
    }    
}


        // for (int i = 0; i < n; ++i) {
        //     if (numbers[i] > k) break;
        //     else if (numbers[i] == k) ++num_k; 
        //     else if (numbers[i] > expected_number) {
        //         skipped += numbers[i] - expected_number;
        //         expected_number = numbers[i];
        //     }
        //     if (numbers[i] == expected_number) ++expected_number;
        // }

        // for (int i = 0; i < n; ++i) {
        //     if (numbers[i] == k) ++num_k;

        //     // if (numbers[i] < expected_number) continue;
        //     if (numbers[i] == expected_number) ++expected_number;
        //     else if (numbers[i] > expected_number) {
        //         skipped += numbers[i] - expected_number;
        //         expected_number = numbers[i] + 1;

        //         if (numbers[i] > k) --skipped;
        //     }
            
        //     if (numbers[i] > k) break;
        // }
