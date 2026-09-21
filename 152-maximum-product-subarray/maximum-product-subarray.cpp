class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int best = nums[0];
        int worst = nums[0];
        int ans = nums[0];
        for(int i = 1; i < n; i++){
            int val1 = nums[i];
            int val2 = nums[i]*best;
            int val3 = nums[i]*worst;
            best = max(val1, max(val2, val3));
            worst = min(val1, min(val2, val3));
            ans = max(ans, best);
        }
        return ans;
    }
};