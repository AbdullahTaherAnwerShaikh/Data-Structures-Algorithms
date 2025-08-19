class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> numMap;
        vector<int> res;
        int size = nums.size();
        int rep = size / 3;
        for (int num : nums) {
            numMap[num]++;
        }
        for (auto it : numMap) {
            if (it.second > rep) {
                res.push_back(it.first);
            }
        }
        return res;
    }
};