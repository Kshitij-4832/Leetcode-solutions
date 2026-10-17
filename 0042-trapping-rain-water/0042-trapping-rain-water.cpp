class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0,right = n-1;
        int leftmax = 0,rightmax = 0,result = 0;
        while(left<=right){
            if(height[left]<=height[right]){
                if(leftmax>height[left]){
                    result = result+leftmax-height[left];
                }
                else{
                    leftmax = height[left];
                }   
                left++;
            }
            else
            {
                if(rightmax>height[right]){
                    result = result+rightmax-height[right];
                }
                else{
                    rightmax = height[right];
                }
                right--;
            }
        }
        return result;
    }
};