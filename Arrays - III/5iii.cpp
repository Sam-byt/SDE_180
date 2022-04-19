class Solution {
    int ncr(int n,int r){
        double temp = 1;
        
        for(int i =1 ; i<= r ; i++ ){
            temp = temp*(n-r+i)/i;
        }
        
        return (int)temp;
    }
public:
    int uniquePaths(int m, int n) {
        return ncr(m+n-2,n-1);
    }
};
