int Solution::solve(vector<int> &A, int B) {

    int xr = 0, cnt = 0;
    unordered_map<int,int>umap;

    for(auto i:A){
        xr = xr^i;

        if(xr == B)cnt++;

        if(umap.find(xr^B) != umap.end())
            cnt += umap[xr^B];

        umap[xr]++;
    }

    return cnt;
    
}
