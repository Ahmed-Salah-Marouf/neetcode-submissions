class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       map<int, bool> mp;
       for(int &i: nums) {
        mp[i] = true;
       }
       int ans = 0;
       for(int &i: nums) {
            if (mp[i - 1])
                continue;
            int p = i;
            int c = 0;
            while (mp[p++]) {
                c++;
            }
            ans = max(ans, c);
       }
       return ans;
       
    }
};
