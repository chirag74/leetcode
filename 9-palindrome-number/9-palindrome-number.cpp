class Solution {
public:
    bool isPalindrome(int x) {
        int z;
        long long res=0;
        long long n=x;
        if(n<0){
            return false;
        
        }
        
 

        while(n!=0){
            z=n%10;
            res=(res*10)+z;
             n=n/10;
        }
        if(x==res)
        return true;
        else
            return false;

        
    }
};