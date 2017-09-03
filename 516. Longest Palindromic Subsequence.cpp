// Tags:    [string][dynamic programming]
class Solution {
   public:
    int longestPalindromeSubseq(string s) {
        int len = s.size();
        if (len <= 1) return len;
        vector<vector<int>> dp(len, vetcor<int>(len, 0));
        for (int k = 0; k < len; ++k) {
            for (int i = 0; i < len - k; ++i) {
                int j = i + k;
                if (i == j)
                    dp[i][j] = 1;
                else
                    dp[i][j] = max(max(dp[i + 1][j], dp[i][j - 1]),
                                   dp[i + 1][j - 1] + (s[i] == s[j] ? 2 : 0));
            }
        }
        return dp[0][len - 1];
    }
};
