class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        nums1.resize(nums1.size() + nums2.size());
        float median = 0;
        int j = nums1.size() - 1;
        int i = nums2.size() - 1;
        while (i >= 0) {
            nums1[j] = nums2[i];
            i--;
            j--;
        }
        sort(nums1.begin(), nums1.end());
        if (nums1.size() % 2 == 0) {
            int midIndex = nums1.size() / 2;
            median = (nums1[midIndex] + nums1[midIndex - 1]) / 2.0;
        }
        else if (nums1.size() % 2 == 1) {
            int midIndex = nums1.size() / 2;
            median = nums1[midIndex];
        }
        return median;
    }
};