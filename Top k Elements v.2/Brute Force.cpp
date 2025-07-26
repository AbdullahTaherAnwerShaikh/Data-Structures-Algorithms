class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>numMap;
        vector<int>ans;
        for (int n : nums) {
            numMap[n]++;
        }
        vector<vector<int>> bucket(nums.size() + 1);
        for (auto x : numMap) {
            int key = x.first;
            int freq = x.second;
            bucket[freq].push_back(key);
        }
        for (int i = nums.size(); i >= 0 && ans.size() < k;i--) {
            for (int n : bucket[i]) {
                ans.push_back(n);
                if (ans.size() == k) break;
            }

        }
        return ans;
    }
};