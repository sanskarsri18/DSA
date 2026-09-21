class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        int count = 1;
        for(auto i : s){
            char ch = i;
            int degree = ch - 'a';
            degree = 26 - degree;
            sum += degree * count;
            count++;
        }
        return sum;
    }
};