class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() == 0)
            return 0;
        int n = height.size();
        int res = 0;
        vector<int>prefix(n,0);
        vector<int>suffix(n,0);

        for(int i=0; i<n; i++){
            if(i==0){
                prefix[i]=height[i];
                continue;
            }

            prefix[i] = max(prefix[i-1], height[i]);
        }

        for(int i=n-1; i>=0; i--){
            if(i==n-1){
                suffix[i]=height[i];
                continue;
            }

            suffix[i] = max(suffix[i+1], height[i]);
        }

        for(int i=0; i<n; i++){
            res += min(prefix[i], suffix[i]) - height[i];
        }

        return res;
    }
};
