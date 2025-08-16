class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size() * 2;
        vector<int> res(n);
        for (int i = 0;i < nums.size();i++) {
            res[i] = nums[i];
        }
        int k = 0;
        for (int j = nums.size();j < n;j++) {
            res[j] = nums[k];
            k++;
        }
        return res;
    }
};