class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int n = heights.size();

        int i = 0, j = n-1;

        int maxArea=0, currentArea=0;
        while(i<j){
            currentArea = min(heights[i], heights[j]) * (j-i);
            maxArea = max(maxArea, currentArea);

            if(heights[i]<heights[j])
                i++;
            else
                j--;
        }

        return maxArea;
    }
};
