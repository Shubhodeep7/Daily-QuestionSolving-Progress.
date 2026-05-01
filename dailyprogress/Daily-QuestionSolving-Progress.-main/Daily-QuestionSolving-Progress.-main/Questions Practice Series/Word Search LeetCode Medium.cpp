#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size(), n = board[0].size();

        // Optional pruning: frequency check
        vector<int> freq(128, 0);
        for (auto &row : board)
            for (char c : row)
                freq[c]++;
        for (char c : word) {
            if (--freq[c] < 0) return false;
        }

        // Another pruning: start from rarer end
        int cnt1 = 0, cnt2 = 0;
        for (auto &row : board) {
            for (char c : row) {
                if (c == word[0]) cnt1++;
                if (c == word.back()) cnt2++;
            }
        }
        if (cnt2 < cnt1) reverse(word.begin(), word.end());

        function<bool(int,int,int)> dfs = [&](int i, int j, int k) {
            if (k == word.size()) return true;
            if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] != word[k])
                return false;

            char temp = board[i][j];
            board[i][j] = '#'; // mark visited

            bool found = dfs(i+1, j, k+1) ||
                         dfs(i-1, j, k+1) ||
                         dfs(i, j+1, k+1) ||
                         dfs(i, j-1, k+1);

            board[i][j] = temp; // backtrack
            return found;
        };

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == word[0] && dfs(i, j, 0))
                    return true;
            }
        }

        return false;
    }
};