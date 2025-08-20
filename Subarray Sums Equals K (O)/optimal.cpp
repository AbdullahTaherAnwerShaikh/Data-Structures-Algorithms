class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0, curSum = 0;
        unordered_map<int, int> freq;
        freq[0] = 1;
        for (int x : nums) {
            curSum += x;
            if (freq.find(curSum - k) != freq.end()) {
                count += freq[curSum - k];
            }
            freq[curSum]++;
        }
        return count;
    }
};