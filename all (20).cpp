#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long ans = LLONG_MAX;
    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        ans = min(ans, llabs(x));
    }
    cout << ans << endl;
    return 0;
}