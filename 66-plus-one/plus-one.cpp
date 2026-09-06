class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int n = digits.size();
        int sum = digits[n - 1] + 1;
        int digit = sum % 10;
        int carry = sum / 10;
        ans.push_back(digit);
        sum = 0;

        for(int i = n - 2; i >= 0; i--){
            sum = digits[i] + carry;
            digit = sum % 10;
            carry = sum / 10;
            ans.push_back(digit);
        }
        if(carry == 1){
            ans.push_back(1);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};