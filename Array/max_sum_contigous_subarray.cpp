int Solution::maxSubArray(const vector<int> &A) {
    int curr_sum = 0, max_sum = INT_MIN;
    for (int i = 0; i < A.size(); i++) {
        curr_sum += A[i];
        max_sum = max(curr_sum, max_sum);
        if (curr_sum < 0) curr_sum = 0;
    }
    return max_sum;
}
