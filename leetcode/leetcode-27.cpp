class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = nums.size();
        for(int i = nums.size() - 1; i >= 0; i--) {
            if(nums[i] == val) {
                nums.erase(nums.begin() + i);
                count--;
            }
        }
        return count;
    }
};