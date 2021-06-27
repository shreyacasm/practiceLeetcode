class Solution {
public:
    int maxArea(vector<int>& height) {
        int width = height.size();
        
        int area = 0;
        int low = 0, high = width-1;
        while(low<high){
            area=max(area, (high-low)*(min(height[high], height[low])));
            
            if(height[low] < height[high]){
                low++;
            }
            else{
                high--;
            }
        }
        return area;
    }
};