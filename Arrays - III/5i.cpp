class Solution {
private:
    
    int t[101][101];
    
    int solve(int i,int j){
        if(i == 0 && j == 0)return 1;
        
        if(i<0 || j<0)return 0;
        
        if(t[i][j] != -1)return t[i][j];
        
        return t[i][j] = solve(i - 1,j) + solve(i,j-1);
    }
public:
    int uniquePaths(int m, int n) {
        
        
        memset(t,-1,sizeof(t));
        return solve(m-1,n-1);
    }
};
