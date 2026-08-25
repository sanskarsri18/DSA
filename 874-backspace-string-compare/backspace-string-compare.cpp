class Solution {
public:
    bool backspaceCompare(string S, string T) {
        return solve(S) == solve(T);
    }

    string solve(string S) {
        string ans; 
        for (char c : S) {
            if (c != '#')
                ans.push_back(c);
            else if (!ans.empty())
                ans.pop_back();
        }
        return ans;
    }
};