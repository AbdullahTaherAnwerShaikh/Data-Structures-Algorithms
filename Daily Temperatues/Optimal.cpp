class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        stack<int> ind;
        for (int i = 0;i < temperatures.size();i++) {
            while (!ind.empty() && temperatures[i] > temperatures[ind.top()]) {
                int index = ind.top();
                ind.pop();
                res[index] = i - index;
            }
            ind.push(i);
        }
        return res;
    }
};