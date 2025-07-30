class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxReach = 0;
        int start = 0;
        unordered_map<char, int> tracker;
        for (int i = 0;i < s.length();i++) {
            if (tracker.find(s[i]) != tracker.end() && tracker[s[i]] >= start) {
                start = tracker[s[i]] + 1;
            }
            tracker[s[i]] = i;
            maxReach = max(maxReach, i - start + 1);
        }
        return maxReach;
    }
};