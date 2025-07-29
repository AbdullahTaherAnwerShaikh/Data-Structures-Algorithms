class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))return false;
        long long rev = 0;
        long long num = x;
        while (rev < num) {
            rev = rev * 10 + num % 10;
            num = num / 10;
        }
        return (rev == num || rev / 10 == num);
    }
};