class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        int n = strs.size();
        for(int i=0; i<n; i++){
            s += strs[i]+'?';
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>result;
        string word = "";
        for(int i=0; i<s.length(); i++){
            if(s[i]=='?'){
                result.push_back(word);
                word="";
            }
            else{
                word += s[i];
            }
            
        }
        return result;
    }
};
