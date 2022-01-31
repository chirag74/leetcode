class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> num;
        
        int i=0;

        int sr=0;
        int sc=0;
        int er=matrix.size()-1;
        int ec=matrix[i].size()-1;
        while(sc<=ec && sr<=er){
        for(int i=sc;i<=ec;i++){
            num.push_back(matrix[sr][i]);
            
        }
            for(int i=sr+1;i<=er;i++){
                num.push_back(matrix[i][ec]);
            }
            for(int i=ec-1;i>=sc;i--){
                if(sr==er){
                    break;
                }
                num.push_back(matrix[er][i]);
            }
        for(int i=er-1;i>=sr+1;i--){
            if(sc==ec){
                break;
            }
            num.push_back(matrix[i][sc]);
        }
        sr++;
        er--;
        ec--;
        sc++;
        }
        return num;
    }
};