class Solution {
public:
    string longestPalindrome(string s) {
        auto expandFromCenter = [&](int left, int right) {
            while (left >= 0 && right < s.length() && s[left] == s[right]) {
                left--;
                right++;
            }
            return s.substr(left + 1, right - left - 1);
            };
        if (s.length() <= 1) return s;
        string maxLen = s.substr(0, 1);

        for (int i = 0;i < s.length() - 1;i++) {
            string odd = expandFromCenter(i, i);
            string even = expandFromCenter(i, i + 1);
            if (odd.length() > maxLen.length()) {
                maxLen = odd;
            }
            if (even.length() > maxLen.length()) {
                maxLen = even;
            }
        }
        return maxLen;
    }
};