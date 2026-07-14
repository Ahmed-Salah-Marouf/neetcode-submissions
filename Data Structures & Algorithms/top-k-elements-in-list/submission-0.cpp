class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq;
        for (int &i: nums) {
            freq[i]++;
        }
        
        vector<pair<int, int>> pairs; // freq, number
        for(auto i : freq) {
            pairs.push_back({i.second, i.first});
        }
        sort(pairs.begin(), pairs.end());
        
        vector<int> ans;
        while(k--) {
            ans.push_back(pairs.back().second);
            pairs.pop_back();
        }
        return ans;
    }
};
