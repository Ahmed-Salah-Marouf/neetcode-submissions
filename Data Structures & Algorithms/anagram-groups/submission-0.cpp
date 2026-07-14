class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        map<string, vector<string>> m;
        for (string &i: strs){
            string t = i;
            sort(t.begin(), t.end());
            m[t].push_back(i);
        }
        vector<vector<string>> ans(m.size());
        int c = 0;
        for(auto [s,v] : m){
            ans[c++] = v;
        }
        return ans;
    }
};