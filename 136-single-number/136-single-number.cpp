class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int c;
    for(int i=0;i<nums.size();i++){
        if(count(nums.begin(),nums.end(),nums[i])==1){
            c=nums[i];
            
        }
    }
        return c;
    }
};