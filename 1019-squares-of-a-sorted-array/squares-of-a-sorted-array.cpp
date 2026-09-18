class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int pivot = -1;
        for(int i = 0; i < n; i++){
            if(nums[i] >= 0){
                pivot = i;
                break;
            }
        }
        if(pivot == -1){
            for(int i = n - 1; i >= 0; i--){
                ans.push_back(nums[i] * nums[i]);
            }
            
            return ans;
        }
        if(pivot == 0){
            for(int i = 0; i < n; i++){
                ans.push_back(nums[i] * nums[i]);
            }
                return ans;
        }

        int i = 0, j = n - 1;
        while(i < pivot && j >= pivot){
            if(nums[i] * nums[i] > nums[j] * nums[j]){
                ans.push_back(nums[i] * nums[i]);
                i++;
            }
            else{
                ans.push_back(nums[j] * nums[j]);
                j--;
            }
        }
        while(i < pivot){
            ans.push_back(nums[i] * nums[i]);
            i++;
        }
        while(j >= pivot){
            ans.push_back(nums[j] * nums[j]);
            j--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};