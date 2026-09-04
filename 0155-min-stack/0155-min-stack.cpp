class MinStack {
public:
    vector<int>st;
    vector<int>min_val;
    MinStack() {

    }
    int mi=pow(2,31)-1;
    void push(int value) {
        if(value <= mi){
            mi = value;
            min_val.push_back(mi);
        }
        st.push_back(value);
    }
    
    void pop() {
        if(st.back() == mi){
            min_val.pop_back();
            if(!min_val.empty()){
                mi = min_val.back();
            }
            else{
                mi = pow(2,31)-1;
            }
        }
        st.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return mi;
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