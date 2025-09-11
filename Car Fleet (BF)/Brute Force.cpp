class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        for (int i = 0;i < speed.size();i++) {
            cars.push_back({ position[i],speed[i] });
        }
        sort(cars.begin(), cars.end());
        vector<double> times;
        for (int i = cars.size() - 1;i >= 0;i--) {
            double time = double(target - cars[i].first) / cars[i].second;
            times.push_back(time);
        }
        int count = 1;
        double curTime = times[0];
        for (int i = 1;i < times.size();i++) {
            if (curTime >= times[i]) {
                continue;
            }
            else {
                count++;
                curTime = times[i];
            }
        }
        return count;
    }
};