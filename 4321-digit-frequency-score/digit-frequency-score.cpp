class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> mp;
        while(n){
            int digit = n % 10;
            mp[digit]++;
            n = n / 10;
        }

        int sum = 0;
        for(auto i : mp){
            sum = sum + (i.first * i.second);
        }
        return sum;
    }
};