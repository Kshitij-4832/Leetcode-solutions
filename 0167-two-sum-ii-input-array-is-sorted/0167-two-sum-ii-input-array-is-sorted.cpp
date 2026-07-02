class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> index = {-1,-1};
        int size =  numbers.size(),start = 0,end=size-1;
        while(start<=end){
            int sum  =  numbers[start]+numbers[end];
            if(sum==target){
                index[0] = start+1;
                index[1] =end+1;
                return index;
            }
            else if(sum>target){
                end--;
            }
            else{
                start++;
            }
        }
        return index;
    }
};