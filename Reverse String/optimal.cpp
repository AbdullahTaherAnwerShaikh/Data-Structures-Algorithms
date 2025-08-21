class Solution {
public:
    void reverseString(vector<char>& s) {
        int j = 0;
        int mid = s.size() / 2;
        for (int i = s.size() - 1;i >= mid;i--) {
            swap(s[i], s[j]);
            j++;
        }
    }
};