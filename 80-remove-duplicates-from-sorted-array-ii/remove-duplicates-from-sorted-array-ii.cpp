class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(k < 2){
                nums[k] = nums[i];
                k++;
            }
            else if(nums[i] != nums[k - 2]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};