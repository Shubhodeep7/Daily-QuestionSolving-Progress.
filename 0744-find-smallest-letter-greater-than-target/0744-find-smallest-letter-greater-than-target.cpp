class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0;
        int right = letters.size() - 1;
        while (low <= right) {
            int mid = low + (right - low) / 2;
            if (letters[mid] <= target)
                low = mid + 1;
            else
                right = mid - 1;
        }
        if (low == letters.size())
            return letters[0];

        return letters[low];
    }
};