class Solution {
public:
    string convert(string s, int numRows) {
        if (s.length() == 1 || numRows == 1 || s.length() <= numRows) return s;
        string result = "";
        int curRow = 0;
        bool goingdown = false;
        vector<string> zigzag(numRows);
        for (char c : s) {
            zigzag[curRow] += c;
            if (curRow == 0 || curRow == numRows - 1) {
                goingdown = !goingdown;
            }
            curRow += goingdown ? 1 : -1;
        }
        for (string row : zigzag) {
            result += row;
        }
        return result;
    }
}; 