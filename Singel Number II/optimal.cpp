class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> numMap;
        for (int i = 0;i < nums.size();i++) {
            numMap[nums[i]]++;
        }
        for (auto pair : numMap) {
            if (pair.second == 1) return pair.first;
        }
        return 0;
    }
};