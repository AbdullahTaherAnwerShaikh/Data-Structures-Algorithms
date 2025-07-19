class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int k;
        int n = nums.size();
        for (int i = 0; i < n;i++) {
            if (nums[i] == target) {
                k = i;
                break;
            }
        }
        return k;
    }
};