class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int size = nums.size();
        stack<int>st;
        vector<int> ans(size,-1);
        for(int i = size;i<2*size;i++){
            nums.push_back(nums[i-size]);
        }
        int nsize =nums.size();
        for(int i = nsize-1;i>=0;i--){
            if(i<size){
                while(!st.empty()&&nums[i]>=st.top()){
                    st.pop();
                }
                if(!st.empty()){
                    ans[i] = st.top();
                }
                st.push(nums[i]);
            }
            else{
                while(!st.empty()&&nums[i]>=st.top()){
                    st.pop();
                }
                st.push(nums[i]);
            }
        }
        return ans;
    }
};