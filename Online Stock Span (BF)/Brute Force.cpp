class StockSpanner {
public:
    vector<int> res;
    vector<int> stor;
    StockSpanner() {

    }

    int next(int price) {
        stor.push_back(price);
        int i = stor.size() - 1, j = i - 1, count = 1;

        while (j >= 0 && stor[j] <= stor[i]) {
            count++;
            j--;
        }
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */