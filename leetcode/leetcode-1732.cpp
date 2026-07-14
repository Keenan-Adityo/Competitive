class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        ios::sync_with_stdio(0), cin.tie(0);
        int ans = 0, cur = 0;
        for(auto i : gain) {
            cur += i;
            if(ans < cur) {
                ans = cur;
            }
        }

        return ans;
    }
};
