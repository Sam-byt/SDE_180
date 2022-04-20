class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,vector<int>>umap;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)umap[nums[i]].push_back(i);
        
        for(int i=0;i<nums.size();i++){
            if(umap.find(target - nums[i]) == umap.end())continue;
            else{
                if(target - nums[i] == nums[i]){
                    if(umap[target-nums[i]].size()>1){
                        ans = {i,umap[target-nums[i]][1]};
                        break;
                    }
                    else continue;
                }
                else{
                    ans = {i,umap[target -nums[i]][0]};
                    break;
                }
            }
        }
        
        return ans;
        
    }
};
