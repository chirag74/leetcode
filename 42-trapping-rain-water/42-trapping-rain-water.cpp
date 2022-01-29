class Solution {
public:
    int trap(vector<int>& height) {
     int left=0;
     int right=height.size()-1;
     int lmax=0;
     int rmax=0;
     int result=0;
        while(left<=right){
            if(rmax<=lmax){
                result+=max(0,rmax-height[right]);
                rmax=max(rmax,height[right]);
                right-=1;
            }
            else{
                result+=max(0,lmax-height[left]);
                lmax=max(lmax,height[left]);
                left+=1;
            }
        }
        return result;
    }
};