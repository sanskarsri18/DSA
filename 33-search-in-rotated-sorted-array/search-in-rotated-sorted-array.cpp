class Solution {

public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int ans = INT_MAX;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] <= nums[n - 1]){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }


    int binarySearch(vector<int>& nums, int low, int high, int target){
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return -1;
    }


    int search(vector<int>& nums, int target) {
        int mini = findMin(nums);
        int n = nums.size();
        if(target <= nums[n - 1]){
            return binarySearch(nums, mini, n - 1, target);
        }
        return binarySearch(nums, 0, mini - 1, target);

    }
};