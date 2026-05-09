class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char>mp = {
            {')', '('},
            {'}','{'},
            {']','['}
        };
        stack<char>stack;

        for(char c : s){
            if(mp.count(c)){
                if(!stack.empty() && stack.top() == mp[c]){
                    stack.pop();
                }
                else{
                    return false;
                }
            }
            else{
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
