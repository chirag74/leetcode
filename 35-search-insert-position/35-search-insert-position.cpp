class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
  int pv,lt=0,rt=nums.size()-1;
           while(lt<=rt){
                   pv=lt+(rt-lt)/2;
                   if(nums[pv]==target){
                           return pv;
                   }
                   if(target<nums[pv])rt=pv-1;
                   else lt=pv+1;
           }
            return lt;
    }
};