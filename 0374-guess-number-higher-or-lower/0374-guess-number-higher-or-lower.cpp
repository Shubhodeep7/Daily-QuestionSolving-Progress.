class Solution {
public:
    int guessNumber(int n) {
        int low = 1;
        int high = n;
        while (low <= high) {
        int mid = low + (high - low) / 2;
            int x = guess(mid);
            if (x == 0)
                return mid;
            else if (x == 1)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};