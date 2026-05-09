class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for(int i=0;i<nums.size(); i++){
            int diff = target - nums[i];
            int j=i+1;
            while(j<nums.size()){
                if(nums[j] == diff)
                    return {i, j};
                else{
                    j++;
                }
            }
        }
        return {};
    }
};
