class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map1, map2;
        
        for (char &c : s) {
            map1[c]++;
        }

        for (char &c : t) {
            map2[c]++;
        }

        for (char i = 'a'; i <= 'z'; i++) {
            if (map1[i] != map2[i])
                return false;
        }
        return true;
    }
};
