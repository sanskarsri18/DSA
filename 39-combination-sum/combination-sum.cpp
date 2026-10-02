class Solution {
public:
    void solve(vector<int>& a, int n, int idx, vector<int>& diary, int sum, vector<vector<int>>& res, int target){
        if(idx == n){
            if(sum == target){
                res.push_back(diary);
            }
            return ;
        }

        solve(a, n, idx + 1, diary, sum, res, target);
        if(a[idx] + sum <= target){
            diary.push_back(a[idx]);
            sum = sum + a[idx];
            solve(a, n, idx, diary, sum, res, target);
            diary.pop_back();
            sum = sum - a[idx];
        }
    }

    vector<vector<int>> combinationSum(vector<int>& a, int target) {
        int n = a.size();
        int sum = 0;
        vector<int> diary;
        vector<vector<int>> res;
        int idx = 0;
        solve(a, n, idx, diary, sum, res, target);
        return res;
    }
};