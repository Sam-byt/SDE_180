class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>uset;
        for(auto i : nums)uset.insert(i);
        
        int len = 0, maxlen = 0;
        
        int n = nums.size();
        
        int temp;
        
        for(int i = 0; i<n;i++){
            
            len = 0;
            
            temp = nums[i]-1;
            if(uset.find(temp) == uset.end()){
                temp++;
                while(uset.find(temp) != uset.end()){
                    len++;
                    temp++;
                }
            }
            
            maxlen = max(len,maxlen);
            
            
        }
        
        return maxlen;
    }
};
