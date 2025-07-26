class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>numMap;
        vector<int>ans;
        priority_queue<pair<int, int>>maxHeap;
        for (auto num : nums) {
            numMap[num]++;
        }
        for (auto x : numMap) {
            maxHeap.push({ x.second,x.first });
        }
        int i = 0;
        while (i < k) {
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
            i++;
        }
        return ans;
    }
};