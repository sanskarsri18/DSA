class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        int best = nums[0];
        for(int i = 1; i < n; i++){
            int val1 = best + nums[i];
            int val2 = nums[i];
            best = max(val1, val2);
            ans = max(ans, best);
        }
        return ans;
    }
};