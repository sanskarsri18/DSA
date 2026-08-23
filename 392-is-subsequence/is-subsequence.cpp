class Solution {
public:
    bool solve(char ch, string t, int& j){
        for(int i = j; i < t.size(); i++){
            if(t[i] == ch){
                j = i + 1;
                return true;
            }
        }
        return false;
    }

    bool isSubsequence(string s, string t) {
        int lens = s.size();
        int lent = t.size();
        int j = 0;
        for(int i = 0; i < lens; i++){
            bool b = solve(s[i], t, j);
            if(b == false){
                return false;
            }
        }
        return true;
    }
};