class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 1; i < n; i++){
            if(nums[count] != nums[i]){
                nums[count + 1] = nums[i];
                count++;
            }
        }
        return count + 1;
    }
};