class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> map;
        for (int i = 0; i < n; i++) {
            int dif = target - nums[i];
            if (map.find(dif) != map.end()) {
                return {map[dif], i};
            }
            map[nums[i]] = i;
        }
    }
};
