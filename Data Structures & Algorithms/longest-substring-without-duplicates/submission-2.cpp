class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> arr;
        int n = s.size(), l = 0, r = 0;
        int ans = 0;
        while (r < n) {
            while(arr[s[r] - 'a'] == 1){
                arr[s[l] - 'a']--;
                l++;
            }
            arr[s[r] - 'a']++;
            ans = max(ans, r - l + 1);
            r++;
        }
        return ans;
    }
};
