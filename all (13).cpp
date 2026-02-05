#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }
        bool ok = true;
        for (int i = 1; i < m; i++) {
            if (a[i] != a[i - 1] + 1) {
                ok = false;
                break;
            }
        }
        if (!ok) {
            cout << 0 << "\n";
            continue;
        }
        int ans = n - a[0] - m + 2;
        cout << ans << "\n";
    }

    return 0;
}
