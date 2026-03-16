#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> cnt(26,0);
        for(char c : s)
            cnt[c-'a']++;
        int odd = 0;
        for(int x : cnt)
            if(x % 2) odd++;
        int need = max(0, odd - 1);
        if(need <= k) cout << "YES\n";
        else cout << "NO\n";
    }
}