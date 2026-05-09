class Solution {
public:
    bool isPalindrome(string s) {
        string copy = "";
        for(auto c: s){
            if(isalnum(c)){
                copy += tolower(c);
            }
        }

        int i=0, j=copy.length()-1;

        while(i<j){
            if(copy[i] != copy[j]){
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};
