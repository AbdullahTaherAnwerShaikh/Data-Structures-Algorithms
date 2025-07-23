class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int>numMap;
        for (int i = 0;i < nums.size();i++) {
            numMap[nums[i]]++;
        }
        int ot = 0;
        int ut = 0;
        for (auto it : numMap) {
            if (it.second > ot) {
                ot = it.second;
                ut = it.first;
            }
        }
        return ut;
    }
};