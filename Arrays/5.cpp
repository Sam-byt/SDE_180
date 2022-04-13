class Solution {
public:
    void sortColors(vector<int>& nums) {
        int beg = 0 , mid = 0, end = nums.size()-1;
        
        while(mid<=end){
            if(nums[mid]<1)swap(nums[beg++],nums[mid++]);
            else if(nums[mid] == 1)mid++;
            else swap(nums[end--],nums[mid]);
        }
        
    }
};
