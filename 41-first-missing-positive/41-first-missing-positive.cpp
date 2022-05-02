class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
int n=nums.size();
sort(nums.begin(),nums.end());
            
            int m=1;
            
            for(auto n:nums){
                    if(n==m)
                            m++;
            }
            return m;
    }
};