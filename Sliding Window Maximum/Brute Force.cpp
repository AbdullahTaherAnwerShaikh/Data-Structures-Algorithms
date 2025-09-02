class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> output;
        int left = 0, right = k - 1;
        while (right < nums.size()) {
            int i = left;
            int winMax = INT_MIN;
            while (i <= right) {
                winMax = max(winMax, nums[i]);
                i++;
            }
            output.push_back(winMax);
            right++;
            left++;
        }
        return output;
    }
};