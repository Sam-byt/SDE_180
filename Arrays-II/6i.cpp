// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    
#define ll long long

ll merge(ll arr[], ll l, ll mid, ll r){
    
    ll *arr1 = new ll[mid - l + 1];
    ll *arr2 = new ll[r - mid];
    
    ll startIndex = l;
    
    for(ll i = 0; i<mid - l +1 ; i++)arr1[i] = arr[startIndex++];
    for(ll i = 0; i<r -mid; i++)arr2[i] = arr[startIndex++];
    
    startIndex = l;
    
    ll i = 0, j = 0;
    
    ll cnt  = 0;
    
    while(i<mid - l + 1 && j<r-mid){
        if(arr1[i]<=arr2[j])
            arr[startIndex++] = arr1[i++];
        else{
            arr[startIndex] = arr2[j];
            cnt += mid - l + 1 - i; 
            startIndex++;
            j++;
        }
    }
    
    while(i<mid-l +1)
        arr[startIndex++] = arr1[i++];
        
        
    while(j<r-mid)
        arr[startIndex++] = arr2[j++];
        
    delete []arr1;
    delete []arr2;
    arr1 = nullptr;
    arr2 = nullptr;
        
    return cnt;
}


ll solve(ll arr[], ll l , ll r){
    
    ll cnt = 0; 
    
    
    if(r>l){
        ll mid = l + (r - l )/2;
        
        cnt += solve(arr,l,mid);
        cnt += solve(arr,mid + 1, r);
        
        cnt += merge(arr,l,mid,r);
    }
    
    return cnt;
}
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        ll l = 0, r = N-1;
        return solve(arr,l,N-1);
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends
