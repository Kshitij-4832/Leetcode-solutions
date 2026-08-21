class Solution {
public:
    void Subsets(vector<int>& nums,int index,vector<vector<int>> & matrix,vector<int>& arr){
        if(index>=nums.size()){
            matrix.push_back(arr);
            return ;
        }
        arr.push_back(nums[index]);
        Subsets(nums,index+1,matrix,arr);//for taking the element
        arr.pop_back();
        Subsets(nums,index+1,matrix,arr);//for not taking the element

        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> matrix;
        vector<int>arr;
        Subsets(nums,0,matrix,arr);
        return matrix;
    }
};