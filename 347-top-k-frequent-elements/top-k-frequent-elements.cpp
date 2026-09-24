class Solution {
public:
    struct comp {
    bool operator()(pair<int,int>& p1, pair<int,int>& p2){
        return p1.second < p2.second;
    }
};

    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, comp> pq;
        unordered_map<int, int> mp;
        for(auto i : nums){
            mp[i]++;
        }
        for(auto i : mp){
            pq.push({i.first, i.second});
        }
        vector<int> ans;
        while(k--){
            pair<int, int> p = pq.top();
            pq.pop();
            ans.push_back(p.first);
        }
        return ans;
    }
};