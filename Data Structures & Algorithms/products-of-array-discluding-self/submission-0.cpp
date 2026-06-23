class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix(n,1);
        int pre=1;
        for(int i=1; i<n; i++){
            pre*=nums[i-1];
            prefix[i]=pre;
        }
        vector<int>suffix(n,1);
        int suf = 1;
        for(int i=n-2; i>=0; i--){
            suf*=nums[i+1];
            suffix[i]=suf;
        }

        vector<int>result(n,1);

        for(int i=0;i<n; i++){
            result[i] = prefix[i]*suffix[i];
        }

        return result;
        
    }
};
