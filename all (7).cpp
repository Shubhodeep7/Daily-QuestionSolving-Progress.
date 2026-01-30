class Solution {
public:
    int daysRequired(vector<int>& weights, int capacity) {
        int days = 1, load = 0;

        for (int w : weights) {
            if (load + w > capacity) {
                days++;
                load = w;
            } else {
                load += w;
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int d) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int requiredDays = daysRequired(weights, mid);

            if (requiredDays <= d)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};
