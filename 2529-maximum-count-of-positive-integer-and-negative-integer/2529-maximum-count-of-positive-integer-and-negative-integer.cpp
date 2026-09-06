class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > 0)
                high = mid - 1;
            else
                low = mid + 1;
        }
        int positive = n - low;
        low = 0;
        high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= 0)
                high = mid - 1;
            else
                low = mid + 1;
        }
        int negative = low;
        return max(positive, negative);
    }
};