class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(auto s:strs){
            encoded += to_string(s.length()) + '#' + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        
        vector<string>decoded;
        int i=0;
        while(i!= s.length()){
            string l = "";
            while(s[i] != '#'){
                l += s[i];
                i++;
            }
            int length = stoi(l);
            i++;
            string word = s.substr(i,length);
            decoded.push_back(word);
            i = i + length;
        }
        return decoded;
    }
};
