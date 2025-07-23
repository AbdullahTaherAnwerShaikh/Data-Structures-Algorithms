class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int>numMap;
        for (int i = 0;i < nums.size();i++) {
            numMap[nums[i]]++;
        }
        for (auto it : numMap) {
            if (it.second == 1) {
                return it.first;
            }
        }
        return {};

    }
};