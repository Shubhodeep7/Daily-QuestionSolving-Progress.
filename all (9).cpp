class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();
        while (i < n && s[i] == ' ')
         i++;
        int start = i;
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            start = i + 1;
        }
        long long ans = 0;
        for (int j = start; j < n; j++) {
            if (s[j] >= '0' && s[j] <= '9') {
                int d = s[j] - '0';
                ans = ans * 10 + d;
                if (ans > INT_MAX) break;
            } else {
                break;
            }
        }
        if (i < n && s[i] == '-')
            ans = -ans;
        if (ans > INT_MAX) 
        return INT_MAX;
        if (ans < INT_MIN) 
        return INT_MIN;
        return (int)ans;
    }
};
