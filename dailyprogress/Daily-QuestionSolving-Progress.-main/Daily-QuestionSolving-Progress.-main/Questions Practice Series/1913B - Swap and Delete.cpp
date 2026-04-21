#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int c0 = 0, c1 = 0;
        for (char c : s) {
            if (c == '0') c0++;
            else c1++;
        }
        int cost = 0;
        for (char c : s) {
            if (c == '0') {
                if (c1 > 0) c1--;
                else cost++;
            } else {
                if (c0 > 0) c0--;
                else cost++;
            }
        }
        cout << cost << "\n";
    }
}