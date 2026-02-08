#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        bool hasK = false;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == k) hasK = true;
        }

        if (!hasK) {
            cout << "NO\n";
            continue;
        }

        int cur = 0, best = 0;
        for (int i = 0; i < n; i++) {
            int val = (a[i] == k ? 1 : -1);
            cur = max(val, cur + val);
            best = max(best, cur);
        }

        cout << (best > 0 ? "YES\n" : "NO\n");
    }
    return 0;
}
