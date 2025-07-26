class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>map;
        for (auto x : strs) {
            string word = x;
            sort(word.begin(), word.end());
            map[word].push_back(x);
        }
        vector<vector<string>>output;
        for (auto x : map) {
            output.push_back(x.second);
        }
        return output;
    }
};