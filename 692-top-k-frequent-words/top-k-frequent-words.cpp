class Solution {
public:
    struct comp {
    bool operator()(pair<string,int>& p1, pair<string,int>& p2){
        if(p1.second > p2.second){
            return false;
        }
        else if(p1.second < p2.second){
            return true;
        }
        else{
            if(p1.first < p2.first){
                return false;
            }
            else{
                return true;
            }
        }
    }
};

    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans;
        priority_queue<pair<string, int>, vector<pair<string, int>>, comp> pq;
        unordered_map<string, int> mp;
        for(auto i : words){
            mp[i]++;
        }
        for(auto i : mp){
            pq.push({i.first, i.second});
        }
        while(k--){
            pair<string, int> p = pq.top();
            pq.pop();
            ans.push_back(p.first);
        }
        return ans;
    }
};