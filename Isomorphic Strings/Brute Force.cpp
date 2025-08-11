class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, char> strMap;
        for (int i = 0;i < s.length();i++) {
            if (strMap.find(s[i]) != strMap.end() && strMap[s[i]] != t[i]) return false;
            strMap[s[i]] = t[i];
        }
        unordered_map<char, char> strMap2;
        for (int i = 0;i < s.length();i++) {
            if (strMap2.find(t[i]) != strMap2.end() && strMap2[t[i]] != s[i]) return false;
            strMap2[t[i]] = s[i];
        }
        return true;
    }
};