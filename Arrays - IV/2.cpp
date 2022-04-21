class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        if(nums.empty())return ans;
        
        sort(nums.begin(),nums.end());
        
        int n  = nums.size();
        
        int s,e,req,two_sum;
        
        for(int i=0 ;i<n; i++){
            for(int j = i+1; j<n; j++){
                
                req = target - nums[i] - nums[j];
                
                //Binary Search
                
                s = j +1;
                e = n -1;
                
                while(s<e){
                    
                    two_sum = nums[s] + nums[e];
                    
                    if(two_sum<req)s++;
                    
                    else if(two_sum>req)e--;
                    
                    else{
                        vector<int>quadruplet = {nums[i],nums[j],nums[s],nums[e]};
                        ans.push_back(quadruplet);
                        
                        //Further Processing to check there is more duplets                               
                        while(s<e && nums[s] == quadruplet[2])s++;
                        while(s<e && nums[e] == quadruplet[3])e--;
                        
                        
                    }
                    
                    
                }
                
                //not consider same again
                while(j+1<n && nums[j+1] == nums[j])j++;
                
            }
            //not consider same again
            while(i+1<n && nums[i+1] == nums[i])i++;
        }
        
        return ans;
    }
};
