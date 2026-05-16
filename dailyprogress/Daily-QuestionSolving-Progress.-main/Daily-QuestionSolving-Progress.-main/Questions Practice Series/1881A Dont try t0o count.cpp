#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int operations = 0;
        string current = x;
        while (operations <= 5) {
            if (current.find(s) != string::npos) {
                cout << operations << '\n';
                break;
            }
            current += current;
            operations++;
        }
        if (operations > 5) {
            cout << -1 << '\n';
        }
    }
    return 0;
}