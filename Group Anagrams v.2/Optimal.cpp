class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string, int>map;

        for (int i = 0;i < strs.size();i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            if (map.find(temp) != map.end()) {
                ans[map[temp]].push_back(strs[i]);
            }
            else {
                map[temp] = ans.size();
                ans.push_back({ strs[i] });
            }
        }
        return ans;
    }
};