class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
int i=0;
        int k=nums.size()-1;
        int c=0;
        while(i<k){
            if(nums[i]==val && nums[k]!=val){
                swap(nums[i],nums[k]);
                i++;
                k--;
            }
            else if(nums[i]==val && nums[k]==val){
                k--;
                swap(nums[i],nums[k]);
              
                
            }
            else if(nums[i]!=val && nums[k]==val){
                i++;
               
            }
            else if(nums[i]!=val && nums[k]!=val){
                i++;
                
            }
              
           
        }
        for(int j=0;j<nums.size();j++){
            if(nums[j]==val){
             c++;   
            }
        }
      
        
        return nums.size()-c;
        
    }
};