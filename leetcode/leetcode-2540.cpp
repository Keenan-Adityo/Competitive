class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int ans = -1;
        int idx1 = 0, idx2 = 0;

        while(idx1 < nums1.size() && idx2 < nums2.size()) {
            if(nums1[idx1] > nums2[idx2]) {
                idx2++;
            } else if(nums1[idx1] < nums2[idx2]) {
                idx1++;
            } else {
                ans = nums1[idx1];
                break;
            }
        }
        return ans;
    }
};
