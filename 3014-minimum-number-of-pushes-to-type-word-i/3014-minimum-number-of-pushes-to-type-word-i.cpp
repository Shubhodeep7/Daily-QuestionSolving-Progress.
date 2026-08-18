class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int pushes = i / 8 + 1;
            ans += pushes;
        }
        return ans;
    }
};