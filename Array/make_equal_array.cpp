int Solution::solve(vector<int> &A, int B) {
    for(auto it:A){
        if(it%B!=0) return 0;
    }
    return 1;
}
