class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size =  nums.size();
        int first = 0,second = 0;
        int count1 = 0,count2 = 0;
        for(int i=0;i<size;i++){
            if(nums[i]==first){
                count1++;
            }
            else if(nums[i]==second){
                count2++;
            }
            else if(count1==0){
                count1++;
                first = nums[i];
            }
            else if(count2==0){
                count2++;
                second = nums[i];
            }
            else{
                count1--;
                count2--;
            }
        }  
        vector <int> ans;
        count1 = 0,count2=0;
        for(int i = 0;i<size;i++){
            if(first==nums[i]){
                count1++;
            }
            else if(second==nums[i]){
                count2++;
            }
        }
        if(count1>size/3){
            ans.push_back(first);
        }
        if(count2>size/3){
            ans.push_back(second);
        }
        return ans;
    }
};