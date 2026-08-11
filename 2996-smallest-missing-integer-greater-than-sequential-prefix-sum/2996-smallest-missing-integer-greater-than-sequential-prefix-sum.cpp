class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int size = nums.size(),sum = 0,lastindex = 0;
        unordered_set<int> elements;
        for(int i  = 0;i<size;i++){
            elements.insert(nums[i]);
        }

        for(int i = 1;i<size;i++){
            if(nums[i]!=nums[i-1]+1){
                break;
            }
            sum = sum + nums[i-1];
            lastindex = i;
        }
        sum = sum+nums[lastindex];
        while(true){
            if(elements.find(sum)!=elements.end()){
                sum++;
            }
            else{
                return sum;
            }
        }
        return -1;
    }
};