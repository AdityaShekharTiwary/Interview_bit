int Solution::solve(vector<int> &A) {
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < A.size(); i++) {
        maxi = max(A[i], maxi);
        mini = min(A[i], mini);
    }
    return maxi + mini;
}
