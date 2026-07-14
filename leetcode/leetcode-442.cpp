class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(0); cin.tie(0);
        bitset<100001> flag;
        vector<int> ans;

        for(auto i : nums) {
            if(flag.test(i)) {
                ans.push_back(i);
            } else {
                flag.set(i);
            }
        }
        return ans;
    }
};
