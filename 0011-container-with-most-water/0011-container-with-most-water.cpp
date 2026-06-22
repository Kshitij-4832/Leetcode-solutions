class Solution {
public:
    int maxArea(vector<int>& height) {
        int size= height.size(),start = 0,end=size-1,max = 0;
        
        while(start<=end){
            int curr_area = min(height[start],height[end])*(end-start);
            if(curr_area>max){
                max= curr_area;
            }
            if(height[start]<height[end]){
                start++;
            }
            else {
                end--;
            }
        }
        return max;
    }
};