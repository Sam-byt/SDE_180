class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int arr[256] = {0};
        
        int j = 0, len = 0, maxlen = 0;
        
        for(int i = 0 ; i<s.length() ; i++){
            
            arr[s[i]]++;
            
            while(arr[s[i]]>1){
                len--;
                arr[s[j]]--;
                j++;
                
            }
            
            
            if(arr[s[i]]<=1)len++;
             
            if(arr[s[i]] == 1)
                maxlen = max(len,maxlen);
            
            
        }
        
        return maxlen;
        
    }
};
