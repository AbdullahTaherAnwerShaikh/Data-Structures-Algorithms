class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = nums2.size() - 1;
        for (int i = nums1.size() - 1;j >= 0;i--) {
            nums1[i] = nums2[j];
            j--;
        }
        sort(nums1.begin(), nums1.end());
    }
};