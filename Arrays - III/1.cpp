class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size(), col = matrix[0].size();
        
        int n = row*col;
        
        int s = 0, e = n-1;
        
        int element,mid;
        
        while(s<=e){
            mid = s + (e - s)/2;
            element = matrix[mid/col][mid%col];
            
            if(target == element)return true;
            
            else if(target < element)e = mid - 1;
            
            else s = mid + 1;
        }
        
        return false;
        
    }
};
