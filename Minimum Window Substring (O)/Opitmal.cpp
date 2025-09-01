class Solution {
public:
    string minWindow(string s, string t) {
        if (t.length() > s.length()) return "";
        unordered_map<char, int> tcount;
        unordered_map<char, int> windowCount;
        for (char c : t) {
            tcount[c]++;
        }
        int required = tcount.size();
        int minLen = INT_MAX;
        int minStart = 0;
        int left = 0, formed = 0, right = 0;
        while (right < s.length()) {
            windowCount[s[right]]++;
            if (windowCount[s[right]] == tcount[s[right]]) {
                formed++;
            }
            right++;
            while (formed == required) {
                if (right - left < minLen) {
                    minLen = right - left;
                    minStart = left;
                }
                char c = s[left];
                windowCount[c]--;
                if (tcount.find(c) != tcount.end() && windowCount[c] < tcount[c]) {
                    formed--;
                }
                left++;
            }
        }
        if (minLen == INT_MAX) return "";
        return s.substr(minStart, minLen);
    }
};