vector<int> Solution::solve(vector<int> &A) {
    int l=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==0){
            swap(A[i],A[l]);
            l++;
        }
    }
    return A;
}
