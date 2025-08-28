class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen = INT_MAX, start = 0, sum = 0;
        for (int end = 0;end < nums.size();end++) {
            sum += nums[end];
            while (sum >= target) {
                minLen = min(minLen, end - start + 1);
                sum -= nums[start];
                start++;
            }
        }
        if (minLen == INT_MAX) return 0;
        return minLen;
    }
};