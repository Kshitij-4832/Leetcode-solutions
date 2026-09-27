class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        int arr[100]={0};
        int size = nums.size(),Max = 0;
        for(int i = 0;i<size;i++){
            arr[nums[i]-1]++;
            Max = max(Max,arr[nums[i]-1]);
        }
        for(int i = 0;i<Max;i++){
            for(int j = 0;j<100;j++){
                if(arr[j]!=0){
                    ans.push_back(j+1);
                    arr[j]--;
                }
            }
        }
        return ans;
        
    }
};