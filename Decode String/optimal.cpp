class Solution {
public:
    string decodeString(string s) {
        stack<int> countSt;
        stack<string> stringSt;
        int curNum = 0;
        string curStr = "";
        for (char c : s) {
            if (isdigit(c)) {
                curNum = curNum * 10 + (c - '0');
            }
            else if (c == '[') {
                countSt.push(curNum);
                stringSt.push(curStr);
                curNum = 0;
                curStr = "";
            }
            else if (c == ']') {
                int count = countSt.top(); countSt.pop();
                string prevStr = stringSt.top(); stringSt.pop();
                string temp = prevStr;
                for (int i = 0;i < count;i++) {
                    temp += curStr;
                }
                curStr = temp;
            }
            else {
                curStr += c;
            }
        }
        return curStr;
    }
};