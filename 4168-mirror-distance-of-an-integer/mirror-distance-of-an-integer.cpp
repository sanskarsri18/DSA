class Solution {
public:
    int mirrorDistance(int n) {
        int temp = n;
        int ans = 0;
        while(temp){
            int digit = temp % 10;
            ans = ans * 10 + digit;
            temp = temp / 10;
        }
        return abs(n - ans);
    }
};