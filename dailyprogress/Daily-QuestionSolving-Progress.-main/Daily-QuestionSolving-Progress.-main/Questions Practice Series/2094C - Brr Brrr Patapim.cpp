#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(2 * n + 1);
        vector<vector<int>> G(n + 1, vector<int>(n + 1));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> G[i][j];
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                p[i + j] = G[i][j];
        for (int k = 2; k <= 2 * n; k++)
            cout << p[k] << " \n"[k == 2 * n];
    }
    return 0;
}