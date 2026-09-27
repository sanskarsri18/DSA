class Solution {
public:
    int fib(int n) {
        if(n == 0 || n == 1){
            return n;
        }
        int val1 = fib(n - 2);
        int val2 = fib(n - 1);
        return val1 + val2;
    }
};