class MinStack {
    stack<int> main;
    stack<int> min_st;

public:
    MinStack() {}
    void push(int value) {
        main.push(value);
        if(min_st.empty() || value<min_st.top())
            min_st.push(value);
        else
            min_st.push(min_st.top());
    }
    void pop() {
        main.pop();
        min_st.pop();
    }
    int top() {
        return main.top();
    }
    int getMin() {
        return min_st.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */