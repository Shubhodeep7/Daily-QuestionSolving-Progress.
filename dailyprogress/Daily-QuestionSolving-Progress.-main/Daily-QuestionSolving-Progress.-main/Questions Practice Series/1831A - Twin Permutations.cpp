#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            v.push_back({a[i], i});
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++) {
            b[v[i].second] = n - i;
        }
        for (int x : b) {
            cout << x << " ";
        }
        cout << '\n';
    }
    return 0;
}
