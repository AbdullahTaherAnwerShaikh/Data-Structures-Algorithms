class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int n2 = nums2.size();
        vector<int> output(n, -1);
        for (int i = 0;i < n;i++) {
            int cur = nums1[i];
            int j = 0;
            auto it = find(nums2.begin(), nums2.end(), cur);
            if (it != nums2.end()) {
                j = it - nums2.begin();
            }

            while (j < n2 && nums2[j] <= cur) {
                j++;
            }

            if (j < nums2.size()) {
                output[i] = nums2[j];
            }
        }
        return output;
    }
};