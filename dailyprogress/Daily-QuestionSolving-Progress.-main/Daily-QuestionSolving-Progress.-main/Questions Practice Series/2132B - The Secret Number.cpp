#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> ans;
        long long power = 10;
        while (power <= n) {
            long long denom = power + 1;

            if (n % denom == 0) {
                long long x = n / denom;
                ans.push_back(x);
            }
            if (power > 1e18 / 10) break;

            power *= 10;
        }

        if (ans.empty()) {
            cout << 0 << "\n";
        } else {
            sort(ans.begin(), ans.end());
            cout << ans.size();
            for (long long x : ans) {
                cout << " " << x;
            }
            cout << "\n";
        }
    }
    return 0;
}