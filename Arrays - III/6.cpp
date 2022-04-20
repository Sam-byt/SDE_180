class Solution {
private:
    int merge(vector<int>&arr, int l, int mid, int r){
        
        int rev = 0;
        
        int j = mid + 1;
        
        for(int i = l ; i<=mid ; i++){
            while(j<=r && arr[i] > 2LL * arr[j])j++;
            rev += (j - (mid + 1));
        }
        
        
        
        
        int *arr1 = new int[mid - l + 1];
        int *arr2 = new int[r - mid];
        
        
        int startIndex = l;
        
        for(int i = 0; i<mid - l + 1; i++)arr1[i] = arr[startIndex++];
        for(int i = 0; i<r - mid; i++)arr2[i] = arr[startIndex++];
        
        startIndex = l;
        
        
        int i =0 ;
         j=0;
        
        while(i<mid-l + 1 && j < r -mid)
            arr[startIndex++] = arr1[i]<=arr2[j]?arr1[i++]:arr2[j++]; 
        
        while(i<mid-l+1)
            arr[startIndex++] = arr1[i++];
        
        while(j<r-mid)
            arr[startIndex++] = arr2[j++];
        
        delete []arr1;
        delete []arr2;
        
        arr1 = nullptr;
        arr2 = nullptr;
        
        
        
        return rev;
    }
    
    
    
    int solve(vector<int>&nums, int l, int r){
        if(l>=r)return 0;
        
        
        
        int mid = l + (r - l)/2;
        
        int rev = 0;
        
        rev += solve(nums,l,mid);
        rev += solve(nums,mid+1,r);
        
        rev += merge(nums,l,mid,r);
        
        return rev;
    }
public:
    int reversePairs(vector<int>& nums) {
        return solve(nums,0,nums.size()-1);
        
    }
};
