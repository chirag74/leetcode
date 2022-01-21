class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
     sort(points.begin(),points.end());
        vector<int>z;
        for(int i=0;i<points.size()-1;i++){
          int x=abs(points[i][0]-points[i+1][0]);
            z.push_back(x);
        }
     sort(z.begin(),z.end());
        return z[z.size()-1];
    
    }
};