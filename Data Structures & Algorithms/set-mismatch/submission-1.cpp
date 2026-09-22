class Solution {
   public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int, int> mp;
        int n = nums.size();
        vector<int> ans;
        for (int& i : nums) {
            mp[i]++;
            if (mp[i] == 2)
                ans.push_back(i);
        }
        for (int i = 1; i <= n; i++) {
            if (!mp[i])
                ans.push_back(i);
        }
        return ans;
    }
};