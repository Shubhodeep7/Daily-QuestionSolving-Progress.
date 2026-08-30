class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int maximum = 0, minimum = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] < nums[minimum])
            minimum = i;
            if(nums[i] > nums[maximum])
            maximum = i;
        }
        int left = min(minimum , maximum);
        int right = max(minimum , maximum);

        int a = right + 1;
        int b = n - left;
        int c = left + n + 1 - right;
        return min( a ,min(b, c));
    }
};