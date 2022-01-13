class Solution {
public:
    int countdigit(int numb){
        int cnt;
        while(numb!=0){
            cnt++;
            numb/=10;
        }
        return cnt;
    }
    int findNumbers(vector<int>& nums) {
   int z=0;
        for(int i=0;i<nums.size();i++){
            if(countdigit(nums[i])%2==0){
         z++;       
            }
        }
        return z;
        
    }
};