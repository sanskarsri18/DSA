class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        int n = nums.size();
        int start = -1, end = -1;
        for(int i = 0; i < n; i++){
            if(nums[i] != temp[i]){
                start = i;
                break;
            }
        }
        for(int i = n - 1; i >= 0; i--){
            if(nums[i] != temp[i]){
                end = i;
                break;
            }
        }
        if(start != -1 && end != -1){
            return end - start + 1;
        }
        return 0;
    }
};