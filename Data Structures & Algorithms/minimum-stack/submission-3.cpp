class MinStack {
public:
    vector<int> minStack;
    vector<int> minimum;

    MinStack() {}

    void push(int val) {
        minStack.push_back(val);

        if (minimum.empty() || val <= minimum.back()) {
            minimum.push_back(val);
        }
    }

    void pop() {
        int lastelement = minStack.back();
        minStack.pop_back();

        if (lastelement == minimum.back()) {
            minimum.pop_back();
        }
    }

    int top() {
        return minStack.back();
    }

    int getMin() {
        return minimum.back();
    }
};