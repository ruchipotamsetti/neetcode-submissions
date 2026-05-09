class MinStack {
public:
    stack<int>s;
    int min = INT_MAX;
    MinStack() {
    }
    
    void push(int val) {
        s.push(val);
        if(val<min)
            min=val;
    }
    
    void pop() {
        s.pop();
        int n = s.size();
        min = INT_MAX;
        vector<int>v;
        for(int i=0; i<n; i++){
            int top = s.top();
            v.push_back(top);
            s.pop();
            if(top<min)
            min=top;
        }

        for(int i=n-1; i>=0; i--){
            s.push(v[i]);
        }
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min;
    }
};
