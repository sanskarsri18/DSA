class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        for(auto i : s){
            mp[i]++;
        }
        bool odd = false;
        for(auto i : mp){
            if(i.second&1){
                odd = true;
            }
        }

        int count = 0;
        for(auto i : mp){
            count += (i.second / 2)*2;
        }

        if(odd){
            return count + 1;
        }
        return count;
    }
};