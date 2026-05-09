class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int>umap;
        for(int i=0; i<n; i++){
            
            umap[nums[i]] = i;
        }

        for(int i=0; i<n; i++){
            int diff = target-nums[i];
            if(umap.find(diff) != umap.end() && i != umap[diff]){
                return {i, umap[diff]};
            }
            else{
                continue;
            }
        }

        return {};
    }
};
