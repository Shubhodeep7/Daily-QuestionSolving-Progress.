#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int neg = 0, zero = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == -1) neg++;
            if (a[i] == 0) zero++;
        }
        int operations = 0;
        operations += zero;
        if (neg % 2 == 0) {
            cout << operations << "\n";
        } else {
            operations += 2;
            cout << operations << "\n";
        }
    }
    return 0;
}