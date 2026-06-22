class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>count;

        for(auto i: nums){
            count[i]++;
        }

        for(auto p: count){
            if(p.second>1)
                return true;
        }
        return false;
    }
};