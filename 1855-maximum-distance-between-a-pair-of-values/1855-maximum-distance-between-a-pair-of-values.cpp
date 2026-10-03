class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;

        for (int i = 0; i < nums1.size(); i++) {
            int low = i;
            int high = nums2.size() - 1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (nums1[i] <= nums2[mid]) {
                    ans = max(ans, mid - i);
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }
        return ans;
    }
};