class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int r = 0;r < 9;++r) {
            unordered_set<char> seen;
            for (int c = 0;c < 9;++c) {
                char current = board[r][c];
                if (current != '.') {
                    if (seen.count(current)) return false;
                    seen.insert(current);
                }
            }
        }
        for (int r = 0;r < 9;++r) {
            unordered_set<char> seen;
            for (int c = 0;c < 9;++c) {
                char current = board[c][r];
                if (current != '.') {
                    if (seen.count(current)) return false;
                    seen.insert(current);
                }
            }
        }
        for (int sr = 0;sr < 3;++sr) {
            for (int sc = 0;sc < 3;++sc) {
                unordered_set<char> seen;
                for (int r = 0;r < 3;++r) {
                    for (int c = 0;c < 3;++c) {
                        int row = sr * 3 + r;
                        int col = sc * 3 + c;
                        char current = board[row][col];
                        if (current != '.') {
                            if (seen.count(current)) return false;
                            seen.insert(current);
                        }
                    }
                }
            }
        }
        return true;
    }
};