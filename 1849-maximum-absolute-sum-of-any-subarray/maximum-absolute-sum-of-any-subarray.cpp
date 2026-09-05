class Solution {
public:
    int positive(vector<int>& nums){
        int n = nums.size();
        int best = nums[0];
        int maxi = best;
        for(int i = 1; i < n; i++){
            int val1 = nums[i] + best;
            int val2 = nums[i];
            best = max(val1, val2);
            maxi = max(maxi, best);
        }
        return maxi;
    }

    int negative(vector<int>& nums){
        int n = nums.size();
        int best = nums[0];
        int mini = best;
        for(int i = 1; i < n; i++){
            int val1 = nums[i] + best;
            int val2 = nums[i];
            best = min(val1, val2);
            mini = min(mini, best);
        }
        if(mini < 0){
            return -mini;
        }
        return mini;
    }

    int maxAbsoluteSum(vector<int>& nums) {
        int maxi = positive(nums);
        int mini = negative(nums);
        return max(maxi, mini);
    }
};