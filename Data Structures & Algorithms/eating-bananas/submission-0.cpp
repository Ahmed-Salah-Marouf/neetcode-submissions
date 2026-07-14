class Solution {
private:
    int can(vector <int>& piles, int k) {
        int numberOfHours = 0;
        for (int &p : piles) {
            numberOfHours += (p + k - 1) / k;
        }
        return numberOfHours;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = 1e9;
        int ans;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (can(piles, m) <= h) {
                ans = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return ans;
    }
};
