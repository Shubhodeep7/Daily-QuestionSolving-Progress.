class Solution {
public:
    int reverse(int x) {
        int original = x;
        long long reverse = 0;
        if (x < 0) {
            long long temp = x;
            temp = -temp;
            x = temp;
        }
        while (x != 0) {
            int y = x % 10;
            reverse = reverse * 10 + y;
            x /= 10;
        }
        if (original < 0) {
            reverse = -reverse;
        }
        if (reverse > 2147483647 || reverse < -2147483648LL) {
            return 0;
        }
        return reverse;
    }
};