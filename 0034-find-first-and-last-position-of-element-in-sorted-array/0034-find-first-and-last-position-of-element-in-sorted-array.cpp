class Solution {
public:
    int search_left(int target,vector<int>& nums,bool checkleft){
        int start = 0,end =nums.size()-1,ans = 0;
        while(start<=end){
            int mid =  (start+end) /2;
            if(nums[mid]==target){
                ans =  mid;  
                end = mid-1;       
                checkleft=true;
            }
            else if(target>nums[mid]){
                start = mid+1;
            }
            else{
                end =  mid-1;
            }
        }
        if(checkleft){
            return ans;
        }
        return -1;
    }
     int search_right(int target,vector<int>& nums,bool checkright){
        int start = 0,end =nums.size()-1,ans = 0;
        while(start<=end){
            int mid =  (start+end) /2;
            if(nums[mid]==target){
                ans =  mid;  
                start = mid+1; 
                checkright = true;      
            }
            else if(target>nums[mid]){
                start = mid+1;
            }
            else{
                end =  mid-1;
            }
        }
        if(checkright){
            return ans;
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>index = {-1,-1};
        index[0] = search_left(target,nums,false);
        index[1] = search_right(target,nums,false);
        return index;
    }
};