int Solution::solve(vector<int> &A, int B) {
    int l = B - 1, r = A.size() - 1;
    int sum = 0, max_sum ;
    for (int i = 0; i < B; i++) sum += A[i];
    max_sum = sum;
    while (l != -1) {
        sum -= A[l--];
        sum += A[r--];
        max_sum = max(sum, max_sum);
    }
    return max_sum;
}

