class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        for (int left = 0;left < nums.size();left++) {
            int curSum = 0;
            for (int right = left;right < nums.size();right++) {
                curSum += nums[right];
                if (curSum == k) {
                    count++;
                }
            }
        }
        return count;
    }
};