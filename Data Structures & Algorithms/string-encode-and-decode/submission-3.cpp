class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for (int i = 0; i < strs.size(); i++) {
            encoded += to_string(strs[i].size());
            encoded += '-';
            encoded += strs[i];
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int m = s.size();
        int i = 0;
        while (i < m) {
            string num;
            while(s[i] != '-') {
                num+=s[i++];
            }
            i++;
            int n = stoi(num);
            string temp;
            while(n--) {
                temp.push_back(s[i++]);
            }
            decoded.push_back(temp);
        }
        return decoded;
    }
};
