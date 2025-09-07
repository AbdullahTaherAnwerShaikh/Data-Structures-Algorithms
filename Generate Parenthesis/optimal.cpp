class Solution {
private:
    void solve(int open, int close, string s, int n, vector<string>ans) {
        if (open == close && open + close == n * 2) {
            ans.push_back(s);
            return;
        }
        if (open < n) {
            solve(open + 1, close, s + "(", n, ans);
        }
        if (close < open) {
            solve(open, close + 1, s + ")", n, ans);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(0, 0, "", n, ans);
        return ans;
    }
};