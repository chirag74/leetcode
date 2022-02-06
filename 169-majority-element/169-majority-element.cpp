class Solution {
public:
    int candidate(vector<int> cand){
        
            int maj_index = 0, count = 1; 
        
  
        for (int i = 1; i < cand.size(); i++) 
        { 
            
            if (cand[maj_index] == cand[i]) 
                count++; 
            else
                count--; 
            if (count == 0) 
            { 
                maj_index = i; 
                count = 1; 
            } 
        } 
        return cand[maj_index]; 
                            }
    bool ismajor(vector<int>nums, int cand){
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==cand){
                c++;
            }
        }
        if(c>nums.size()/2)
            return 1;
        else
            return 0;
        
    }
    int majorityElement(vector<int>& nums) {
         int cand=candidate(nums);
        
        if(ismajor(nums,cand)){
            return cand;
        }
        else
            return -1;
        
    }
};