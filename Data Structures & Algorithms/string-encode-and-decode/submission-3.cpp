class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        int n = strs.size();
        for(int i=0; i<n; i++){
            s += to_string(strs[i].size());
            s += "#";
            s += strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>result;
        string word = "";
        int i=0;
        int n = s.length();
        while(i<n){
            string wlength = "";
            while(s[i] != '#'){
                wlength += s[i];
                i++;
            }
            int word_length = stoi(wlength);
            i++;
            word = s.substr(i, word_length);
            result.push_back(word);
            word="";
            i += word_length;
        }
        return result;
    }
};
