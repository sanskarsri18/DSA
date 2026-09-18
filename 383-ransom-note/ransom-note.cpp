class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> f1;
        unordered_map<char, int> f2;
        int n1 = ransomNote.size();
        int n2 = magazine.size();
        for(auto i : ransomNote){
            f1[i]++;
        }
        for(auto i : magazine){
            f2[i]++;
        }

        for(auto i : f1){
            if(f1[i.first] > f2[i.first]){
                return false;
            }
        }
        return true;


    }
};