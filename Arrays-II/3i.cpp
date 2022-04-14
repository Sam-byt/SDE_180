class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = 0, j =0, k =0;
        vector<int>ans(m+n);
        while(i<m && j<n){
            ans[k++] = nums1[i]<nums2[j]?nums1[i++]:nums2[j++];
        }
        
        while(i<m){
            ans[k++] = nums1[i++];
        }
        
        while(j<n){
            ans[k++] = nums2[j++];
        }
        
        nums1 = ans;
        
    }
};
