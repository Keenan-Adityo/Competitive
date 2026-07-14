class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;
        for(auto i : nums) {
            if(i < 0) ans = ans * -1; 
            else if(i == 0) ans = 0;
        } 
        return ans;
    }
};
