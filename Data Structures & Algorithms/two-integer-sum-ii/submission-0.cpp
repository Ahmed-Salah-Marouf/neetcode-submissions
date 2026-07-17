class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l = 0, r = n - 1;

        while(l < r && numbers[l] + numbers[r] != target) {
            while (numbers[l] + numbers[r] > target)
                r--;
            while (numbers[l] + numbers[r] < target)
                l++;
        }
        return {l + 1, r + 1};
    }
};
