class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        long long ans = 1;
        while(true) {
            if(ans * ans == x) {
                break;
            }
            if(ans * ans > x) {
                ans--;
                break;
            }ans++;
        }
        return ans;
    }
};
