class Solution {
public:
    bool isValid(string s) {
        vector<int>storage;
        for (auto i : s) {
            if (i == '(' || i == '{' || i == '[') {
                if (i == '(') {
                    storage.push_back(1);
                }
                if (i == '{') {
                    storage.push_back(2);
                }
                if (i == '[') {
                    storage.push_back(3);
                }
            }
            else {
                if (storage.empty())return false;
                int sti = storage.back();
                bool num = false;
                if (i == ')' && sti == 1) {
                    num = true;
                }if (i == '}' && sti == 2) {
                    num = true;
                }if (i == ']' && sti == 3) {
                    num = true;
                }
                if (!num)return false;
                storage.pop_back();
            }
        }
        return storage.empty();
    }
};