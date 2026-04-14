#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        int minSum = n * (a - b);
        int maxSum = n * (a + b);
        if (max(minSum, c - d) <= min(maxSum, c + d))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
