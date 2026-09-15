class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        bool insert = false;
        int n = intervals.size();
        for(int i = 0; i < n; i++){
            int start = intervals[i][0];
            if(insert == false && start >= newInterval[0]){
                res.push_back(newInterval);
                insert = true;
            }
            res.push_back(intervals[i]);
        }
        if(insert == false){
            res.push_back(newInterval);
        }
        return merge(res);
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        int start1 = intervals[0][0];
        int end1 = intervals[0][1];
        for(int i = 1; i < n; i++){
            int start2 = intervals[i][0];
            int end2 = intervals[i][1];
            if(end1 >= start2){
                start1 = start1;
                end1 = max(end1, end2);
                continue;
            }
            ans.push_back({start1, end1});
            start1 = start2;
            end1 = end2;
        }
        ans.push_back({start1, end1});
        return ans;
    }
};