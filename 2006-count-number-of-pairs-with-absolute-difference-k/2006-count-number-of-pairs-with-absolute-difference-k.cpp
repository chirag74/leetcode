class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int z=nums[i]-nums[j];
              if(z<0){
                  z*=(-1);
              }
                if(z==k){
                    count++;
                }
            }
        }
        return count;
        
    }
};