class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVol = 0;
        for (int i = 0;i < height.size();i++) {
            for (int j = i + 1;j < height.size();j++) {
                int temp = min(height[i], height[j]) * (j - i);
                if (temp > maxVol) {
                    maxVol = temp;
                }
            }
        }
        return maxVol;
    }
};