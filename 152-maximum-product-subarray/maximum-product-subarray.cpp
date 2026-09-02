class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        int best = nums[0];
        int worst = nums[0];
        for(int i = 1; i < n; i++){
            int val1 = best * nums[i];
            int val2 = nums[i];
            int val3 = worst * nums[i];
            best = max(val1, max(val2, val3));
            worst = min(val1, min(val2, val3));
            ans = max(ans, best);
        }
        return ans;
    }
};