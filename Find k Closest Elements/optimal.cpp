class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> output(k);
        int l = 0, r = arr.size() - 1;
        while (r - l + 1 > k) {
            if (abs(arr[l] - x) <= abs(arr[r] - x)) {
                r--;
            }
            else l++;
        }
        for (int i = 0;i < k;i++) {
            output[i] = arr[l + i];;
        }
        return output;
    }
};