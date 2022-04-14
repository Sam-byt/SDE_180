class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int gap = ceil((m + n)/2.0);
        
        for(int i =0;i<n;i++){
            nums1[m+i] = nums2[i];
        }
        
        int i, j;
        
        while(gap>0){
            
            i = 0;
            j = gap;
            
            while(i<m+n && j<m+n){
                if(nums1[i]>nums1[j])swap(nums1[i],nums1[j]);
                i++;
                j++;
            }
            
            
            
            if(gap == 1)break;
            gap = gap%2 == 0?gap/2 : gap/2 + 1;
        }
        
    }
};
