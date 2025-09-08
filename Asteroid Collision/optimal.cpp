class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s1;
        bool c = false;
        for (int i = 0;i < asteroids.size();i++) {
            bool c = true;
            if (s1.empty()) {
                s1.push(asteroids[i]);
                continue;
            }
            while (!s1.empty() && s1.top() > 0 && asteroids[i] < 0) {
                if (abs(s1.top()) < abs(asteroids[i])) {
                    s1.pop();
                }
                else if (abs(s1.top()) == abs(asteroids[i])) {
                    s1.pop();
                    c = false;
                    break;
                }
                else {
                    c = false;
                    break;
                }
            }
            if (c == true) s1.push(asteroids[i]);
        }
        vector<int> output(s1.size());
        for (int i = s1.size() - 1;i >= 0;i--) {
            output[i] = s1.top();
            s1.pop();
        }
        return output;
    }
};