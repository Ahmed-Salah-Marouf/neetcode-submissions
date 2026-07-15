// prefix and suffix array O(n)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n + 3, 1), suffix(n + 3, 1);
        for(int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] * nums[i];
        }
        suffix[n] = nums[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            suffix[i + 1] = suffix[i + 2] * nums[i];
        }

        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            ans[i] = prefix[i] * suffix[i + 2];
        }
        return ans;
    }
};
