vector<int> Solution::solve(vector<int> &A) {
    int l = 0, r = A.size() - 1;
    vector<int> res;
    while (l <= r) {
        if (A[l]*A[l] > A[r]*A[r]) {
            res.push_back(A[l]*A[l]);
            l++;
        }
        else {
            res.push_back(A[r]*A[r]);
            r--;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

