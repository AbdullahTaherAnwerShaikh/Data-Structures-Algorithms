class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>row(1, 1);
        for (int i = 1;i < rowIndex;i++) {
            row[0] = 1;
            row[i] = 1;
            for (j = i - 1;j > 0;j--) {
                row[j] = row[j] + row[j - 1];
            }
        }
        return row;
    }
};