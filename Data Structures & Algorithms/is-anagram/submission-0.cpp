class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>countChar(26, 0);

        for(char c:s){
            countChar[c - 'a']++;
        }

        for(char c:t){
            if(countChar[c - 'a'] == 0)
                return false;
            countChar[c - 'a']--;
        }

        for(int i:countChar){
            if(i>0)
                return false;
        }
        return true;
    }
};
