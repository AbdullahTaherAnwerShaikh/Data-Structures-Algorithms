class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int>numMap;
        for (int i = 0;i < nums.size();i++) {
            numMap[nums[i]]++;
        }
        bool ok = false;
        for (auto it : numMap) {
            if (it.second > 1) {
                ok = true;
            }
        }
        return ok;
    }
};