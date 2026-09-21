class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = 0;
        int n = nums.size();
        int low = 0;
        int high = k - 1;
        for(int i = low; i <= high; i++){
            ans = ans + nums[i]/double(k);
        }
        double newAvg = ans;
        for(int i = high + 1; i < n; i++){
            newAvg = newAvg - nums[low]/(double)k;
            newAvg = newAvg + nums[i]/(double)k;
            ans = max(ans, newAvg);
            low++;

        }
        return ans;
    }
};