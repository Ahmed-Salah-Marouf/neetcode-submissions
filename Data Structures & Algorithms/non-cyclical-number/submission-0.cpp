class Solution {
private:
    int sumOfSquares(int n) {
        int sum = 0;
        while(n) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        bool visted[1001] = {0};
        while(!visted[n] && n > 1) {
            visted[n] = true;
            n = sumOfSquares(n);
        }
        return n == 1;
    }
};
