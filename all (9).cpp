#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        int k = 0;
        while (n > 3) {
            n /= 4;
            k++;
        }

        long long ans = 1;
        for (int i = 0; i < k; i++) {
            ans *= 2;
        }

        cout << ans << endl;
    }

    return 0;
}
