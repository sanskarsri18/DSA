class Solution {
public:
    string decodeString(string s) {
        stack<int> num;
        stack<string> str;
        string curr = "";
        int currNum = 0;
        for(char c : s){
            if(isdigit(c)){
                currNum = currNum * 10 + (c - '0');
            }
            else if(c == '['){
                num.push(currNum);
                str.push(curr);
                currNum = 0;
                curr = "";
            }
            else if(c == ']'){
                int k = num.top();
                num.pop();
                string prev = str.top();
                str.pop();
                string repeated = "";
                for(int i = 0; i < k; i++){
                    repeated += curr;
                }
                curr = prev + repeated;
            }
            else{
                curr += c;
            }
        }
        return curr;
    }
};