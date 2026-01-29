#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int quo = n / 15;
        int rem = n % 15;

        int ans = quo * 3;
        if(rem >= 0) ans++;
        if(rem >= 1) ans++;
        if(rem >= 2) ans++;

        cout << ans << "\n";
    }
    return 0;
}
