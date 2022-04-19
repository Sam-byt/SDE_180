class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0,num1,num2;
        for(auto i : nums){
            if(i == num1)cnt1++;
            else if(i == num2)cnt2++;
            else if(cnt1 == 0){
                num1 = i;
                cnt1++;
            }
            else if(cnt2 == 0){
                num2 = i;
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        
        cnt1 = 0, cnt2 = 0;
        
        for(auto i:nums){
            cnt1 += (num1 == i);
            cnt2 += (num2 == i);
        }
        
        int n  = nums.size()/3;
        vector<int>ans;
        
        if(cnt1>n && cnt2>n){
            ans = {num1,num2};
        }
        else if(cnt1>n && cnt2<=n){
            ans = {num1};
        }
        else if(cnt1<=n && cnt2>n){
            ans = {num2};
        }
        
        return ans;
        
    }
};
