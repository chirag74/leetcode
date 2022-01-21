class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
   vector<int> z;
       
        for(int i=0;i<bank.size();i++){
            int c=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1'){
                    c++;
                }
                
            }
            z.push_back(c);
        }
        int pd=0;
        int ans;
        int sum=0;
for(int i=0;i<z.size();i++){
    if(z[i]!=0){
        ans=pd*z[i];
        pd=z[i];
    sum+=ans;
    }
}
      
        return sum;
    }
};