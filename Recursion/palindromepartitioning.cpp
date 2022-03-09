class Solution {


    
private:
    
    bool isPalindrome(string s,int i,int j)
    {   
        while(i<j)
        {
            if(s[i] != s[j])return false;
            i++;
            j--;
        }
        return true;
    }
    
    
    void solve(int i,string str,vector<string>v,vector<vector<string>>&ans)
    {
        if(i == str.length()){
            ans.push_back(v);
            return;
        }
        
        
            for(int j=i;j<str.length();j++){
                if(isPalindrome(str,i,j)){
                    v.push_back(str.substr(i,j-i+1));
                    solve(j+1,str,v,ans);
                    v.pop_back();
                }
            }
    }
    
public:
    vector<vector<string>> partition(string s) {
        
        
        vector<vector<string>> ans;
        
        vector<string>v;
        
        solve(0,s,v,ans);
        
        return ans;
    }
};
