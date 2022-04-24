class Solution {
public:
    int countDigitOne(int n) {
            int count=0;
     for(long long i=1;i<=n;i*=10){
             long long d=i*10;
             count+=(n/d)*i+min(max(n%d-i+1,0LL),i);
     }   
            return count;
    }
};