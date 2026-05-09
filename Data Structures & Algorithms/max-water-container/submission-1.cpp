class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int n = heights.size();

        int i = 0, j = n-1;

        int maxHeight=0, currentHeight=0;
        while(i<j){
            currentHeight = min(heights[i], heights[j]) * (j-i);
            maxHeight = max(maxHeight, currentHeight);

            if(heights[i]<heights[j])
                i++;
            else
                j--;
        }

        return maxHeight;
    }
};
