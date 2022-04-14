vector<int> Solution::repeatedNumber(const vector<int> &A) {

    vector<int> ans(2),hash(A.size()+1,0);

    for(auto i: A)hash[i]++;

    for(int i=1;i<hash.size();i++){
        if(hash[i] == 2)ans[0] = i;
        if(hash[i] == 0)ans[1] = i;
    }

    return ans;
    
}
