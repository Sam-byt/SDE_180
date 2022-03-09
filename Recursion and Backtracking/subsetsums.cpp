// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
    
private:
    
    void solve(int n,vector<int>arr,int sum,vector<int>&ans)
    {
        if(n==0)
        {
            ans.push_back(sum);
            return;
        }
        
        
        solve(n-1,arr,sum,ans);
        
        solve(n-1,arr,sum+arr[n-1],ans);
        
        
    }
    
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans;
        
        solve(N,arr,0,ans);
        
        return ans;
        
        
         
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
