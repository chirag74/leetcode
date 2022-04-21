class Solution {
public:
    int reverse(int x) {
     int n=x;
            long long res=0;
            // if(x>0){
           while(n!=0){
                   int z=n%10;
                   res=res*10+z;
                   n=n/10;
           }
            // }
//             else{
//                     usigned int r=x*(-1);
//                     while(r!=0){
//                             int z=r%10;
//                             res=res*10+z;
//                             r/=10;
//                     }
//                     res*=(-1);
//             }
            
            if(res>INT_MAX || res <INT_MIN){
                    return 0;
            }
            else{
            return res;
            }
            
    }
};