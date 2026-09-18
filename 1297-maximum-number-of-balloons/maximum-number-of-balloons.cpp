class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp;
        unordered_map<char, int> f;
        for(auto i : text){
            mp[i]++;
        }
        string s = "balloon";
        for(auto i : s){
            f[i]++;
        }

        s = "balon";
        int count = INT_MAX;
        for(int i = 0; i < 5; i++){
            count = min(count, mp[s[i]]/f[s[i]]);
        }
        return count;
    }
};