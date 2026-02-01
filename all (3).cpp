#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long x;
    long long ans = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (abs(x) < ans)
            ans = abs(x);
    }

    cout << ans;
    return 0;
}
