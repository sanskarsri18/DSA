class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();
        long long noDel = arr[0];
        long long oneDel = LLONG_MIN;
        long long res = arr[0];

        for(int i = 1; i < n; i++){
            long long prevNoDel = noDel;
            noDel = max((long long)arr[i], noDel + arr[i]);

            if (oneDel == LLONG_MIN) {
                oneDel = prevNoDel;              // first time: only option is "delete arr[i]"
            } else {
                oneDel = max(prevNoDel, oneDel + arr[i]);
            }

            res = max(res, max(noDel, oneDel));
        }
        return (int)res;
    }
};