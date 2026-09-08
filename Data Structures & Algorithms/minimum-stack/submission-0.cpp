class MinStack {
private:
    stack<int> stack1;
    stack<int> minStack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stack1.push(val);
        if (!minStack.empty()) {
            minStack.push(min(minStack.top(), val));
        } else {
            minStack.push(val);
        }
    }
    
    void pop() {
        stack1.pop();
        minStack.pop();
    }
    
    int top() {
        return stack1.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
