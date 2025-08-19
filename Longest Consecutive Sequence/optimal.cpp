class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int count = 1;
        int curLen = 1;
        for (int i = 0;i < nums.size() - 1;i++) {
            if (nums[i] == nums[i + 1]) continue;
            if (nums[i] + 1 == nums[i + 1]) {
                curLen++;
            }
            else {
                curLen = 1;
            }
            count = max(curLen, count);
        }
        return count;
    }
};