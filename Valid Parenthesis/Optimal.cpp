class Solution {
public:
    bool isValid(string s) {
        vector<int>st;
        for (char i : s) {
            if (i == '(' || i == '{' || i == '[') {
                if (i == '(') {
                    st.push_back(1);
                }
                if (i == '{') {
                    st.push_back(2);
                }
                if (i == '[') {
                    st.push_back(3);
                }
            }

            else {
                if (st.empty())return false;
                int sti = st.back();
                bool ok = false;
                if (sti == 1 && i == ')') {
                    ok = true;
                }
                if (sti == 2 && i == '}') {
                    ok = true;
                }
                if (sti == 3 && i == ']') {
                    ok = true;
                }
                if (!ok)return false;
                st.pop_back();
            }
        }
        return st.empty();
    }

};