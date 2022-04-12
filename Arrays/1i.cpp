class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        
        vector<bool>row (m,true),col(n,true);
        
        for(int i = 0;i<m;i++){
            for(int j =0;j<n;j++){
                if(matrix[i][j] == 0){
                    row[i] = false;
                    col[j] = false;
                }
            }
        }
        
        for(int i =0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(!row[i] or !col[j]){
                    matrix[i][j] = 0;
                }
            }
        }
        
    }
};
