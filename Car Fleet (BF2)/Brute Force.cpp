class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        for (int i = 0;i < speed.size();i++) {
            cars.push_back({ position[i],speed[i] });
        }
        sort(cars.begin(), cars.end());
        double curMaxT = 0;
        int count = 0;
        for (int i = cars.size() - 1;i >= 0;i--) {
            double time = double(target - cars[i].first) / cars[i].second;
            if (curMaxT >= time) {
                continue;
            }
            else {
                count++;
                curMaxT = time;
            }
        }

        return count;
    }
};