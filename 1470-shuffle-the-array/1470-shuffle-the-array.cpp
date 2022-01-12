class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> x;
        int j=n;
       for(int i=0;i<n;i++){
           x.push_back(nums[i]);
           while(j<nums.size()){
               x.push_back(nums[j]);
               j++;
               break;
           }
           
       }
        
        return x;
        
    }
};