class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for (int x : nums)
            mp[x]++;
        vector<int> ans;
        while (k--) {
            int mx = 0, num;
            for (auto x : mp) {
                if (x.second > mx) {
                    mx = x.second;
                    num = x.first;
                }
            }
            ans.push_back(num);
            mp.erase(num);
        }
        return ans;
    }
};