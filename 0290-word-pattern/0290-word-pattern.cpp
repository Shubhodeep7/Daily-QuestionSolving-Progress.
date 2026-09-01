class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word = "";
        for (char c : s) {
            if (c == ' ') {
                words.push_back(word);
                word = "";
            } else {
                word += c;
            }
        }
        words.push_back(word);
        if (pattern.size() != words.size())
            return false;
        for (int i = 0; i < pattern.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (pattern[i] == pattern[j] &&
                    words[i] != words[j])
                    return false;
                if (pattern[i] != pattern[j] &&
                    words[i] == words[j])
                    return false;
            }
        }
        return true;
    }
};