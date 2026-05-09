class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(auto s: strs){
            encoded += (s+":;");
        }
        return encoded;
    }

    vector<string> decode(string s) {
        string word = "";
        int flag=0;
        vector<string>decoded;
        for(int i=0; i<s.length(); i++){
            if(s[i] == ':'){
                flag=1;
                word += s[i];
            }
            else if(s[i] == ';'){
                if(flag == 1){
                    string new_word = word.substr(0,word.length()-1);
                    decoded.push_back(new_word);
                    word="";
                }
                else{
                    flag=0;
                    word += s[i];
                }
            }
            else{
                word += s[i];
            }
        }
        return decoded;
    }
};
