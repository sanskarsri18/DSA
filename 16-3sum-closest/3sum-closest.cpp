class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int mini = INT_MAX;
        int sum = INT_MIN;
        int n = nums.size();
        for(int i = 0; i < n - 2; i++){
            int low = i + 1, high = n - 1;
            while(low < high){
                if(nums[i] + nums[low] + nums[high] == target){
                    return target;
                }
                else if(nums[i] + nums[low] + nums[high] < target){
                    int diff = target - (nums[i] + nums[low] + nums[high]);
                    if(diff < mini){
                        mini = diff;
                        sum = nums[i] + nums[low] + nums[high];
                    }
                    low++;
                }
                else{
                    int diff = (nums[i] + nums[low] + nums[high]) - target;
                    if(diff < mini){
                        mini = diff;
                        sum = nums[i] + nums[low] + nums[high];
                    }
                    high--;
                }
            }
        }
        return sum;
    }
};