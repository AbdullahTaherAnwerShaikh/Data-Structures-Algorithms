class Solution {
public:
    bool isPalindrome(string s) {
        string g = "";
        for (char c : s) {
            if (isalnum(c)) {
                g += tolower(c);
            }
        }
        int left = 0, right = g.size() - 1;
        while (left < right) {
            if (g[left] != g[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};