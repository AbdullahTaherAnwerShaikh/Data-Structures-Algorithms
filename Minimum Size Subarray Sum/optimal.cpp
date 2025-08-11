class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start = 0;
        int sum = 0;
        int end = 0;
        int minLength = INT_MAX;
        for (int end = 0;end < nums.size();end++) {
            sum += nums[end];
            while (sum >= target) {
                minLength = min(minLength, end - start + 1);
                sum -= nums[start];
                start++;
            }
        }
        if (minLength == INT_MAX) return 0;
        return minLength;
    }
};