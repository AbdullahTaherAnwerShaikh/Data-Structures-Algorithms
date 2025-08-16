class MyHashSet {
private:
    vector<list<int>> table;
    int size;

    int hash(int key) {
        return key % size;
    }
public:
    MyHashSet() {
        size = 1000;
        table.resize(size);
    }

    void add(int key) {
        int idx = hash(key);
        if (!contains(key)) {
            table[idx].push_back(key);
        }
    }

    void remove(int key) {
        int idx = hash(key);
        if (contains(key)) {
            table[idx].remove(key);
        }
    }

    bool contains(int key) {
        int idx = hash(key);
        for (int num : table[idx]) {
            if (num == key) return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */