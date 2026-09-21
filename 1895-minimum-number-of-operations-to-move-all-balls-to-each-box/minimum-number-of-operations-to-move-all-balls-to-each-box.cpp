class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(i == j){
                    continue;
                }
                if(boxes[j] == '1'){
                    count += abs(j - i);
                }
            }
            ans[i] = count;
        }
        return ans;
    }
};