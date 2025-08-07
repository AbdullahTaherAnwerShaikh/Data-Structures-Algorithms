class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> cycle;
        int sum = n;
        bool res = false;
        while (true) {
            int sq = 0;
            int temp = sum;
            while (temp != 0) {
                int digit = temp % 10;
                temp = temp / 10;
                sq += pow(digit, 2);
            }
            if (sq == 1) {
                return true;
            }
            if (cycle.find(sq) != cycle.end()) {
                return false;
            }
            cycle.insert(sq);
            sum = sq;
        }
        return false;
    }
};