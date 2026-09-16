#include <cstring>
class Solution {

private:
    int dp[1000][1000];
    int calc(int i, int j, string &s, string &t) {
        if (j == t.size())
            return 1;
        if (i == s.size())
            return 0;
        
        if(~dp[i][j])
            return dp[i][j];
        int take = 0, leave = 0;
        if (s[i] == t[j])
            take = calc(i + 1, j + 1, s, t);
        leave = calc(i + 1, j, s, t);
        return dp[i][j] = take + leave;
    }
public:
    int numDistinct(string s, string t) {
        memset(dp, -1, sizeof(dp));
        return calc(0, 0, s, t);
    }
};
