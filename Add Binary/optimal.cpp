class Solution {
public:
    string addBinary(string a, string b) {
        int alen = a.length() - 1;
        int blen = b.length() - 1;
        int carry = 0;
        string ans;
        while (alen >= 0 || blen >= 0 || carry) {
            if (alen >= 0) {
                carry += a[alen--] - '0';
            }
            if (blen >= 0) {
                carry += b[blen--] - '0';
            }
            ans += carry % 2 + '0';
            carry /= 2;
        }
        reverse(begin(ans), end(ans));
        return ans;
    }
};