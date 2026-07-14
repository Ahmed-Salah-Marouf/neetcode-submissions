class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int res = nums[0];
        if (nums[0] < nums[n - 1])
            return res;
        
        int l = 0, r = n - 1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            
            res = min(res, nums[m]);

            if (nums[l] < nums[r]) {
                res = min(res, nums[l]);
            }

            if (nums[m] >= nums[l])
                l = m + 1;
            else
                r = m - 1;

        }
        return res;
    }
};
