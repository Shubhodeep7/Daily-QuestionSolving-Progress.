#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll ans = 0;
        for (ll l = 1; l * l <= n; l++) {
            if (n % l == 0) {
                ll r = n / l;
                ans = max(ans, r - l + 1);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
