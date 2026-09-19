class Solution {
public:
    int maximumSum(vector<int>& arr) {
        long long int n = arr.size();
        long long int noDel = arr[0];
        long long int oneDel = INT_MIN;
        long long int ans = arr[0];
        for(int i = 1; i < n; i++){
            long long int prevnoDel = noDel;
            long long int prevoneDel = oneDel;
            long long int val1 = max(prevnoDel + arr[i], (long long)arr[i]);
            long long int val2 = max(prevoneDel + arr[i], prevnoDel);
            noDel = val1;
            oneDel = val2;
            ans = max(ans, max(val1, val2));
        }
        return ans;
    }
};