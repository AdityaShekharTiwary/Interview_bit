int Solution::solve(vector<int> &A) {
    int cnt=0,currMax=INT_MIN;
    for(int i=0;i<A.size();i++){
        if(A[i]>currMax){
            cnt++;
            currMax=A[i];
        }
    }
    return cnt;
}
