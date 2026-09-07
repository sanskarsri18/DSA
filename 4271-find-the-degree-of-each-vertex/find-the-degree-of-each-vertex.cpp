class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 1){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};