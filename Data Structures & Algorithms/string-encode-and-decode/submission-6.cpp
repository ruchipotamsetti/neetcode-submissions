class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";

        for(auto s:strs){
            encoded += s + "*!";
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string>decoded;
        string word = "";
        int i=0;
        while(i<s.size()){
            if(s[i] == '*' && s[i+1] == '!'){
                decoded.push_back(word);
                word = "";
                i+=2;
            }
            else{
                word += s[i];
                i++;
            } 
        }
        return decoded;
    }
};
