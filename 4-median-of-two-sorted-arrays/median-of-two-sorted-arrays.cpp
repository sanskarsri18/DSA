class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        for(auto i : nums1){
            temp.push_back(i);
        }
        for(auto i : nums2){
            temp.push_back(i);
        }
        sort(temp.begin(), temp.end());
        int n = temp.size();
        if(n&1){
            return temp[n/2];
        }
        return (temp[n/2] + temp[n/2 - 1])/2.0;
    }
};