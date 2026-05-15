#include <iostream> 
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        int lost_points = 0;
        bool want_same_parity = true;
        
        for (int i = 0; i < n; ++i) {
            int a, b;
            cin >> a >> b;
            
            bool same_parity = (a % 2 == b % 2);
            if (same_parity != want_same_parity) {
                ++lost_points;
                want_same_parity = !want_same_parity;
            }
        }

        cout << m - lost_points << '\n';
    }
}
