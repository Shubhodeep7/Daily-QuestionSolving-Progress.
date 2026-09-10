class Solution {
public:
    bool isSubstringPresent(string s) {
        bool a[26][26] = {};
        for(int i = 0; i < s.size() - 1; i++) {
            a[s[i] - 'a'][s[i + 1] - 'a'] = true;
        }
        for(int i = 0; i <s.size() - 1; i++) {
            if(a[s[i + 1] - 'a'][s[i] - 'a'])
                return true;
        }
        return false;
    }
};