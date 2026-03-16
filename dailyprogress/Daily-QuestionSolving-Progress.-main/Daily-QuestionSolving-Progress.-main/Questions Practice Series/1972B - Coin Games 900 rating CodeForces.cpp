#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int cnt = 0;
        for (char c : s) {
            if (c == 'U') cnt++;
        }
        if (cnt % 2 == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
