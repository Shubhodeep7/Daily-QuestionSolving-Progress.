class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.length() != t.length())
    return false;
    int freq[256] = {0};
    for(char c : s)
    freq[c]++;

    for(char c : t){
    freq[c]--;
    if(freq[c]<0)
    return false;
    }
    return true;
    }
};