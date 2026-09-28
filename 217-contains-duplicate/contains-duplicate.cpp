class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> temp;
        for(auto i : nums){
            temp.insert(i);
        }
        return nums.size() != temp.size();
    }
};