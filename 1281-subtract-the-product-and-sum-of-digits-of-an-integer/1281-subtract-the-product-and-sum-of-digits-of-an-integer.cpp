class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int z=n;
        int res=1;
        int sum=0;
        while(z!=0){
           int r=z%10;
            res=res*r;
            sum+=r;
            z/=10;
            
            }
    
        int ans=res-sum;
        return ans;
        
    }
};