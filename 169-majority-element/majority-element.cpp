class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int candidate = nums[0];
        for(int i = 0; i < n; i++){
            if(nums[i] == candidate){
                count++;
            }
            else if (count == 0){
                candidate = nums[i];
            }
            else{
                count--;
            }
        }
        return candidate;
    }
};