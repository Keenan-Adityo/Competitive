class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        ios::sync_with_stdio(0); cin.tie(0);
        unordered_set<long long> flag;
        long long ans = 1;
        for(auto i : nums) {
            if(i > 0) flag.insert(i);
            
        }
        while(flag.find(ans) != flag.end()) ans++;
        
        return ans;
    }
};
