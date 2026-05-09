class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size()==0){
            return 0;
        }

        unordered_set<int>s(nums.begin(), nums.end());
        
        int longestSequence = 0;
        int currentSequence;

        for(int num: s){
            currentSequence = 0;
            if(!s.count(num-1)){
                currentSequence++;
                int nextNum = num + 1;
                while(s.count(nextNum)){
                    currentSequence++;
                    nextNum++;
                    cout<<currentSequence<<endl;
                }
            }
            longestSequence = max(longestSequence, currentSequence);
        }

        return longestSequence;
    }
};
