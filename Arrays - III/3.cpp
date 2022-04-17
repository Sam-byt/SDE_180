class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int cnt = 0, element;
        
        for(auto i : nums){
            if(cnt == 0){
                element = i;
            }
            
            element == i?cnt++:cnt--;
        }
        
        return element;
    }
};
