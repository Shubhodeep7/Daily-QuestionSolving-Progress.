#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        long long a,b,c;
        cin >> a >> b >> c;
        long long g = __gcd(a, __gcd(b,c));
        long long pieces = a/g + b/g + c/g;
        if(pieces <= 6) cout << "YES\n";
        else cout << "NO\n";
    }
}