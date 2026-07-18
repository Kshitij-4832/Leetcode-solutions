class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int leftmax = 0, rightmax = 0;
        int start = 0, end = size - 1;
        int  i = 0,ans  = 0;
        while (start < end) {
            leftmax = max(leftmax,height[start]);
            rightmax =  max(rightmax,height[end]);
            if(leftmax<rightmax){
                ans  =  ans+min(leftmax,rightmax)-height[start];
                start++;
            } 
            else{
                ans = ans+min(leftmax,rightmax)-height[end];
                end--;
            }
        }
        return ans;
    }
};