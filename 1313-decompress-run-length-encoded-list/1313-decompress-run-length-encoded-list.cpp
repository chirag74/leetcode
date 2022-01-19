class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> st;
        for(int i=0;i<nums.size()-1;i+=2){
            for(int j=1;j<=nums[i];j++){
                st.push_back(nums[i+1]);
                
            }
        }
        return st;
    }
};