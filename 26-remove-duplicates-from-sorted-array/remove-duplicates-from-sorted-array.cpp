class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int off = 0;
        int cm = 1;
        while(cm < n){
            if(nums[cm] != nums[cm - 1]){
                nums[off + 1] = nums[cm];
                off++;
            }
            cm++;
        }
        return off + 1;
    }
};