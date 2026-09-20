class Solution {
public:
    bool solve(vector<int>& piles, int h, int k){
        int n = piles.size();
        long long int count = 0;
        for(int i = n - 1; i >= 0; i--){
            count += ceil(piles[i] / (double)k);
        }
        if(count <= h){
            return true;
        }
        return false;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int low = 1, high = piles[n - 1];
        int ans = high;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(solve(piles, h, mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};