class Solution {
public:
    int solve(string s1, string s2){
        int l1 = s1.length();
        int l2 = s2.length();
        int count = 0;
        int i = 0;
        int j = 0;
        while(i < l1 && j < l2){
            if(s1[i++] == s2[j++]){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }

    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size();
        int mini = INT_MAX;
        for(int i = 0; i < n - 1; i++){
            int count = solve(strs[i], strs[i + 1]);
            mini = min(mini, count);

        }
        string ans = "";
        if(mini == INT_MAX){
            return strs[0];
        }
        for(int i = 0; i < mini; i++){
            ans.push_back(strs[0][i]);
        }
        return ans;
    }
};