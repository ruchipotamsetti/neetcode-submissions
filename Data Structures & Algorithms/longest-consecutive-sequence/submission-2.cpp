class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size()==0 || nums.size()==1){
            return nums.size();
        }
        sort(nums.begin(), nums.end());

        int count = 1;
        int maxCount = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                continue;
            }

            if(nums[i] == nums[i-1] + 1){
                count++;
            }
            else{
                if(count > maxCount){
                    maxCount = count;
                }
                count = 1;
            }
        }

        if(count > maxCount){
            maxCount = count;
        }

        return maxCount;
    }
};
