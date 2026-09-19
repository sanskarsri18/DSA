class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int ans = INT_MIN;
        while(low < high){
            int area = (high - low) * min(nums[low], nums[high]);
            ans = max(ans, area);
            if(nums[low] < nums[high]){
                low++;
            }
            else{
                high--;
            }

        }
        return ans;   
    }
};