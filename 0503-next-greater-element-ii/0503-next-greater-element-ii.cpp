// class Solution {
// public:
//     vector<int> nextGreaterElements(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> ans(n);
//     stack <int> st;
//     for(int i = 2*n - 1;i>=0;i--){
//         int ind = i%n;
//         int currELE = nums[ind];
//         while(!st.empty() && st.top() <= currELE){
//         st.top();
//         }    
//         if(i<n){
//             if(st.empty())
//             ans[i] = -1;
//             else ans[i] = st.top();
//         } st.push(currELE);
//     }    
//     return ans;
//     }
// };

class Solution {
public:
    vector<int> nextGreaterElements(vector<int> arr) {
        int n = arr.size();
        vector<int> ans(n, -1);
        for(int i=0; i < n; i++) {
            int currEle = arr[i];
            for(int j=1; j < n; j++) {
                int ind = (j+i) % n;
                if(arr[ind] > currEle) {
                    ans[i] = arr[ind];
                    break;
                }    
            }
        }
        return ans;
    }
};
