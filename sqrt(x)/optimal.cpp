class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)return x;
        int low = 0;
        int high = x;
        int ans = 0;
        long mid = 0;
        while (low <= high) {
            mid = (high + low) / 2;
            long sq = mid * mid;
            if (sq == x) {
                return mid;
            }
            if (sq > x) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};