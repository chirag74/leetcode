class Solution {
public:
        int setbit(int n){
                int count=0;
                while(n){
                        count+=n&1;
                        n>>=1;
                }
                return count;
                
        }
    vector<int> countBits(int n) {
       vector<int>ans;
            for(int i=0;i<=n;i++){
                int z=setbit(i);
                ans.push_back(z);
        }
            return ans;
    }
};