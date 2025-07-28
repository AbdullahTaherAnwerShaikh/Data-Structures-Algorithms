class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = 0;
        for (int i = 0;i < nums.size();i++) {
            if (nums[i] == target) {
                break;
            }
            if (nums[i] > target) {
                break;
            }
            index++;
        }
        return index;
    }
};