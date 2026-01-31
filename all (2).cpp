#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) 
        cin >> a[i];
        for (int i = 0; i < n; i++) 
        cin >> b[i];
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            int gain = a[i] - b[i + 1];
            if (gain > 0) 
            ans += gain;
        }
        ans += a[n - 1];
        cout << ans << "\n";
    }
    return 0;
}
