vector<vector<int> > Solution::solve(vector<vector<int> > &A) {
    int n=A.size();
    int m=A[0].size();
    vector<vector<int>>res(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            res[i][j]=A[j][i];
        }
    }
    return res;
}
