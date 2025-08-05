class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long ans = 0;
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        if (s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (s[i] == '+') {
            i++;
        }
        while (i < s.length()) {
            if (s[i] >= '0' && s[i] <= '9') {
                ans = (ans * 10) + (s[i] - '0');
                i++;
                if (sign == 1 && ans > INT_MAX) return INT_MAX;
                else if (sign == -1 && -ans < INT_MIN) return INT_MIN;
            }
            else {
                return ans * sign;
            }
        }
        return ans * sign;
    }
};