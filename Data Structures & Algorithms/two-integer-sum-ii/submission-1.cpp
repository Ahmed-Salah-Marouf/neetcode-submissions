class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;

        while(l < r && numbers[l] + numbers[r] != target) {
            while (numbers[l] + numbers[r] > target)
                r--;
            while (numbers[l] + numbers[r] < target)
                l++;
        }
        return {l + 1, r + 1};
    }
};
