class Solution {
   private:
    bool isNumber(const std::string& s) {
        if (s.empty()) return false;

        size_t start = 0;
        if (s[0] == '-' || s[0] == '+') start = 1;

        if (start == s.size()) return false;  // just "-" or "+"

        for (size_t i = start; i < s.size(); i++) {
            if (!std::isdigit(static_cast<unsigned char>(s[i]))) 
                return false;
        }
        return true;
    }

   public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        for (string &s: tokens) {
            if (isNumber(s)) {
                int d = stoi(s);
                nums.push(d);
            } else {
                int b = nums.top();
                nums.pop();
                int a = nums.top();
                nums.pop();

                if (s == "+") {
                    nums.push(a + b);
                } else if (s == "-") {
                    nums.push(a - b);
                } else if (s == "*") {
                    nums.push(a * b);
                } else if (s == "/") {
                    nums.push(a / b);
                }
            }
        }
        return nums.top();
    }
};
