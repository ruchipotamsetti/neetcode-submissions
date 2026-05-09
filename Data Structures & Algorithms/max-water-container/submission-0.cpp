class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxHeight=0, currentHeight=0;
        int n = heights.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i == j)
                    continue;
                
                currentHeight = min(heights[i], heights[j]) * abs(i-j);
                maxHeight = max(currentHeight, maxHeight);
            }
        }

        return maxHeight;
    }
};
