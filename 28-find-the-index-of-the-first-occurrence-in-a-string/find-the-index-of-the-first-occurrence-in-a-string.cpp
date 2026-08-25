class Solution {
public:
    bool solve(string haystack, string needle, int l1, int l2, int idx, int& j){
        int i = 0;
        j = idx;
        while(i < l2){
            if(haystack[idx] != needle[i]){
                return false;
            }
            idx++;
            i++;
        }
        return true;
    }

    int strStr(string haystack, string needle) {
        int l1 = haystack.size();
        int l2 = needle.size();
        for(int i = 0; i < l1; i++){
            if(haystack[i] == needle[0]){
                int j = -1;
                bool check = solve(haystack, needle, l1, l2, i, j);
                if(check){
                    return j;
                }
            }
        }
        return -1;
    }
};