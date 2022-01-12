class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> x;
        x.push_back(nums[0]);
        int y=0;
        for(int i=1;i<nums.size();i++){
        
            int z=nums[i]+x[y];
            x.push_back(z);
            y++;
        }
        return x;
    }
};