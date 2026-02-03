class Solution {
public:
    int maxDepth(string s) {
    int a = 0;
    int b = 0;
    for(char c : s){
        if(c == '(')
        a = max(a,++b);
        if(c == ')')
        b--;
    }
    return a;
    }
};