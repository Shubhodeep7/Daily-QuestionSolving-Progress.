#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int cntF = 0, cntT = 0, cntN = 0;
        string other = "";
        for (char c : s) {
            if (c == 'F') cntF++;
            else if (c == 'T') cntT++;
            else if (c == 'N') cntN++;
            else other += c;
        }
        cout << string(cntF, 'F')
             << string(cntN, 'N')
             << string(cntT, 'T')
             << other << "\n";
    }
    return 0;
}