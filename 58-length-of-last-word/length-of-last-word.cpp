class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length() - 1;
        while(n >= 0 && s[n] == ' '){
            n--;
        }
        int count = 0;
        while(n >= 0){
            if(s[n] == ' '){
                return count;
            }
            count++;
            n--;
        }
        if(n == -1){
            return count;
        }
        return 1;
    }
};