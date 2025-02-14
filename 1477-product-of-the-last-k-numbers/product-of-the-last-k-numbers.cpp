class ProductOfNumbers {
    std::vector<int> list;
    
public:
    ProductOfNumbers() {
        list.clear();
    }
    
    void add(int num) {
        if (num == 0) {
            list.clear();
            return;
        }
        int prev = (list.empty()) ? 1 : list.back();
        list.push_back(prev * num);
    }
    
    int getProduct(int k) {
        int s = list.size();
        if (s < k) return 0;
        if (s == k) return list[s - 1];
        return list[s - 1] / list[s - 1 - k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */