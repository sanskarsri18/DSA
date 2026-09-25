class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        int count = 0;
        for(auto i : operations){
            if(i[0] == '+' || i[2] == '+'){
                count++;
            }
            else{
                count--;
            }
        }
        return count;
    }
};