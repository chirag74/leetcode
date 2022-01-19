class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int larg=0;
        for(int i=1;i<=n-2;){
            if(arr[i]>arr[i+1] and arr[i]>arr[i-1]){
                int j=i;
                int count=1;
                while(j>=1 and arr[j]>arr[j-1])
                {
                    j--;
                    count++;
                }
                while(i<=n-2 and arr[i]>arr[i+1]){
                    i++;
                    count++;
                }
                larg=max(larg,count);
                
                
            }
            else{
                i++;
            }
        }
        return larg;
    }
};