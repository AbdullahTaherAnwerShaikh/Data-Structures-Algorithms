class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, cnt = 0, rep = k;
        vector<int> arr(128);
        for (int r = 0;r < s.size();r++) {
            cnt = max(cnt, ++arr[s[r]]);
            if (r - l + 1 - cnt > k) {
                arr[s[l++]]--;
            }
        }
        return s.length() - l;
    }
};