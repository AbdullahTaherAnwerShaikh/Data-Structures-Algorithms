class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>row(1, 1);  //Creates a vector row of size 1, with the value 1.
        for (int i = 1;i <= rowIndex;i++) {
            row.resize(i + 1);
            row[i] = row[0] = 1;
            for (int j = i - 1;j > 0;j--) {
                row[j] = row[j] + row[j - 1];
            }
        }
        return row;
    }
};