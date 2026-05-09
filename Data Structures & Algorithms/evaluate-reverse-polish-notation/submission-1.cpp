class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;

        for(string s:tokens){
            if(s != "+" && s != "-" && s != "*" && s != "/"){
                cout<<s<<endl;
                st.push(stoi(s));
            }
            else{
                if(s == "+"){
                    int b = st.top();
                    st.pop();
                    int a = st.top();
                    st.pop();
                    st.push(a+b);
                }
                else if(s == "-"){
                    int b = st.top();
                    st.pop();
                    int a = st.top();
                    st.pop();
                    st.push(a-b);
                }
                else if(s == "*"){
                    int b = st.top();
                    st.pop();
                    int a = st.top();
                    st.pop();
                    st.push(a*b);
                }
                else{
                    int b = st.top();
                    st.pop();
                    int a = st.top();
                    st.pop();
                    st.push(a/b);
                }

            }
        }
        return st.top();
    }
};
