class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
     // sort(points.begin(),points.end());
        vector<int>z;
        int ans=0;
        for(int i=0;i<points.size();i++){
        z.push_back(points[i][0]);
        }
     sort(z.begin(),z.end());
         for(int i=0;i<z.size()-1;i++){
          if(z[i+1]-z[i]>ans){
              ans=z[i+1]-z[i];
          }
        }
        return ans;
    
    }
};