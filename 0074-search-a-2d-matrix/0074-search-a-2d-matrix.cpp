class Solution {
public:
    bool search_row(vector<vector<int>> & matrix,int target,int row){
        int startrow = 0,endrow = matrix[0].size()-1;
        while(startrow<=endrow){
            int mindex = (startrow+endrow)/2;
            if(matrix[row][mindex]==target){
                return true;
            }
            else if(target>matrix[row][mindex]){
                startrow = mindex+1;
            }
            else{
                endrow = mindex-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(),col=matrix[0].size(),start=0,end=row-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(matrix[mid][0]<=target&&matrix[mid][col-1]>=target){
                return search_row(matrix,target,mid);
            }
            else if(target>matrix[mid][col-1]){
                start = mid +1;
            }
            else{
                end  = mid-1;
            }
        }
        return false;
    }
};