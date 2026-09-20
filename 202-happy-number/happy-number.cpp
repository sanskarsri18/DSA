class Solution {
public:
    int squareSum(int n){
        int ans = 0;
        while(n){
            int digit = n % 10;
            ans += (digit * digit);
            n = n / 10;
        }
        return ans;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        while(true){
            slow = squareSum(slow);
            fast = squareSum(squareSum(fast));
            if(slow == fast){
                break;
            }
        }
        if(slow == 1){
            return true;
        }
        return false;
    }
};