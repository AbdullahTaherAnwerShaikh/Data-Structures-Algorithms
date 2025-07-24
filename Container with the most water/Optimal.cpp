int maxVol = 0;
int left = 0;
int right = height.size() - 1;
while (left < right) {
    int temp = min(height[left], height[right]) * (right - left);
    if (temp > maxVol) { maxVol = temp; }
    if (height[left] > height[right]) {
        right--;
    }
    else { left--; }
}
return maxVol;