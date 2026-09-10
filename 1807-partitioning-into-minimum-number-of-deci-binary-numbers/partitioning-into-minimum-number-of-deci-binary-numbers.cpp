class Solution {
public:
    int minPartitions(string n) {
        int size = n.length();
        int ans = 0;
        for(int i = 0; i < size; i++){
            int digit = n[i] - '0';
            ans = max(ans, digit);
        }
        return ans;
    }
};