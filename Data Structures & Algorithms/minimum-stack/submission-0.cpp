class MinStack {
public:
    stack<int>st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int>temp;
        int min=st.top();
        while(!st.empty()){
            int top = st.top();
            if(top<min){
                min = top;
            }
            temp.push(top);
            st.pop();
        }

        while(!temp.empty()){
            int top = temp.top();
            st.push(top);
            temp.pop();
        }
        return min;
    }
};
