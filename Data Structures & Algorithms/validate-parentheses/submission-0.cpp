class Solution {
private:
    bool sameType(char &a, char &b) {
        if (a == '{' && b == '}')
            return true;
        if (a == '(' && b == ')')
            return true;
        if (a == '[' && b == ']')
            return true;
        
        return false;
    }
public:
    bool isValid(string s) {
        stack<char> stack;
        for (char &c : s) {
            cout << c << '\n';
            if (c == '[' || c == '(' || c == '{'){
                stack.push(c);
            } else {
                if (stack.empty() || !sameType(stack.top(), c))
                    return false;
                else 
                    stack.pop();
            }
        }
        return stack.empty();
    }
};
