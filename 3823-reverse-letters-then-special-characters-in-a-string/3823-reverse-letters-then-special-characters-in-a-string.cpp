class Solution {
public:
    string reverseByType(string s) {
        vector<char> letters;
        vector<char> special;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                letters.push_back(s[i]);
            }
            else {
                special.push_back(s[i]);
            }
        }
        int l = letters.size() - 1;
        int sp = special.size() - 1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = letters[l];
                l--;
            }
            else {
                s[i] = special[sp];
                sp--;
            }
        }
        return s;
    }
};