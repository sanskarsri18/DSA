class Solution {
public:
    bool isPalindrome(string nums) {
        int n = nums.size();
        int i = 0, j = n - 1;
        while(i < j){
            while(i < j && !((nums[i] >= 'a' && nums[i] <= 'z') || (nums[i] >= 'A' && nums[i] <= 'Z') || (nums[i] >= '0' && nums[i] <= '9'))){
                i++;
            }
            while(i < j && !((nums[j] >= 'a' && nums[j] <= 'z') || (nums[j] >= 'A' && nums[j] <= 'Z') || (nums[j] >= '0' && nums[j] <= '9'))){
                j--;
            }
            if(tolower(nums[i]) != tolower(nums[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};