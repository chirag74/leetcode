class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> z;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                z.push_back(matrix[i][j]);
            }
        }
        sort(z.begin(),z.end());
        return z[k-1];
        
    }
};