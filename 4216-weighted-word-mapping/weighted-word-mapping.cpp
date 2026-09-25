class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";
        int n = words.size();
        for(int i = 0; i < n; i++){
            int weight = 0;
            for(int j = 0; j < words[i].size(); j++){
                weight += weights[words[i][j] - 'a'];
            }
            weight = weight % 26;
            ans.push_back('z' - weight);
        }
        return ans;
    }
};