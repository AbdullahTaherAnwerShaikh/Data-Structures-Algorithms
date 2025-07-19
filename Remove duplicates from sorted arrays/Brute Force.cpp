class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) { return 0; }
        int k = n;
        for (int i = 0; i < k - 1; i++) {
            for (int j = i + 1; j < k;) {
                if (nums[i] == nums[j]) {
                    for (int m = j + 1; m < k; m++) {
                        nums[m - 1] = nums[m];

                    }
                    k--;
                }
                else {
                    j++;
                }
            }
        }

        return k;
    }
};