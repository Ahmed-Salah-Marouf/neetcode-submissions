class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        vector <string> ans;
        for (char i = 'a'; i <= 'z'; i++) {
            int mn = 1000;
            for (string s: words) {
                int c = count(s.begin(), s.end(), i);
                mn = min(mn, c);
            }
            string a;
            a.push_back(i);
            while(mn--) {
                ans.push_back(a);
            }
        }
        
        return ans;
    }
};