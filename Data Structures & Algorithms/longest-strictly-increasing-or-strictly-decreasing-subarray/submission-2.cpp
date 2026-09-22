class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        for(int i = 0; i < n; i++) {
            int j = i;
            int c = 1;
            while(j + 1 < n && nums[j] > nums[j + 1]) {
                c++;
                j++;
            }
            ans = max(ans, c);
            j = i, c = 1;
            while(j + 1 < n && nums[j] < nums[j + 1]) {
                c++;
                j++;
            }
            ans = max(ans, c);
        }
        return ans;
    }
};