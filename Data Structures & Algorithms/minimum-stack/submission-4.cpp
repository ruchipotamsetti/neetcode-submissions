class MinStack {
public:
    stack<int>s;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        stack<int>temp;
        int mini = s.top();
        while(s.size()){
            int top = s.top();
            mini = min(mini, top);
            temp.push(top);
            s.pop();
        }

        while(temp.size()){
            int top = temp.top();
            s.push(top);
            temp.pop();
        }

        return mini;

    }
};
