class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int flag[101];
        memset(flag, 0, sizeof(flag));
        for(auto i : mat) {
            int idx = 0;
            int last = -1;
            for(auto j : i) {
                if(j == 1) {
                    if(last < 0) {
                        flag[idx]++;
                    } else {
                        flag[last]++;
                        flag[idx]+= 2;
                    }
                    last = idx;
                }
                idx++;
            }
        }
        int ans = 0;
        for(int i = 0; i < 101; i++) {
            if(flag[i] == 1) {
                ans++;
            }
        }
        return ans;
    }
};