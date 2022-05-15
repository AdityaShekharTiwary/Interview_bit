vector<int> Solution::solve(vector<int> &A) {
    int neg=0,pos=0;
    vector<int> res;
    for(auto it:A){
        if(it<0) neg++;
        else if(it>0) pos++;
    }
    res.push_back(pos);
    res.push_back(neg);
    return res;
}
