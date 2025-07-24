class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closestSum = nums[0] + nums[1] + nums[nums.size() - 1];
        int minDiff = abs(closestSum - target);
        sort(nums.begin(), nums.end());
        for (int i = 0;i < nums.size() - 2;i++) {

            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                int diff = abs(sum - target);
                if (minDiff > diff) {
                    minDiff = diff;
                    closestSum = sum;
                }
                if (sum < target) {
                    left++;
                }
                else if (sum > target) {
                    right--;
                }
                else return sum;
            }
        }
        return closestSum;
    }
};