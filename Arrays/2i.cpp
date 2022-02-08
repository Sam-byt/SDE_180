#define ll long long

class Solution {

    
private:
    
    ll t[31][31];
    
    ll solve(ll n, ll r){
        
        if (n == 0 || r ==0)return 1;
        if(r == 1)return n;
        if(n == r)return 1;
        
        if(t[n][r] != -1)return t[n][r];
        
        return t[n][r] = solve(n-1,r) + solve(n-1,r-1);
        
        
    }
    
    ll ncr(int n, int r){
        
        memset(t,-1,sizeof(t));
        return solve(n,r);
        
        
        
    }
    
    
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>ans;
        vector<int> v;
        for(ll i=0;i<numRows;i++){
            
            for(ll j=0; j<=i;j++){
                
                v.push_back(ncr(i,j));
                
                
            }
            
            ans.push_back(v);
            v.clear();
        }
        
        return ans;
        
    }
};
