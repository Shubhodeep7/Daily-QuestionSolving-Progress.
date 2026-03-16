#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        int screens = (y + 1) / 2;
        int space = screens * 15 - y * 4;
        if(space < x) {
            screens += (x - space + 14) / 15;
        }
        cout << screens << endl;
    }
    return 0;
}