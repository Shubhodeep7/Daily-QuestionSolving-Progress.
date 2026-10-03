class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        int last = -1;
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            }
            else {
                if (st.empty()) {
                    last = i;
                }
                else {
                    st.pop();
                    if (st.empty()) {
                        ans = max(ans, i - last);
                    }
                    else {
                        ans = max(ans, i - st.top());
                    }
                }
            }
        }
        return ans;
    }
};