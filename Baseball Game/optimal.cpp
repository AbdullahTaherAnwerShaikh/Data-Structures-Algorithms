class Solution {
public:
    int calPoints(vector<string>& operations) {
        int value1, value2, ans = 0;
        stack<int> stk;

        for (string s : operations) {
            if (s == "C") {
                stk.pop();
            }
            else if (s == "D") {
                stk.push(stk.top() * 2);
            }
            else if (s == "+") {
                value1 = stk.top();
                stk.pop();
                value2 = stk.top();
                stk.push(value1);
                stk.push(value1 + value2);
            }
            else {
                stk.push(stoi(s));
            }
        }
        while (stk.size() != 0) {
            ans += stk.top();
            stk.pop();
        }
        return ans;
    }
};