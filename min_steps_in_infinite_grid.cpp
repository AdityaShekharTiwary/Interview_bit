int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int width = 0, hight = 0, sum = 0;
    int n = A.size();
    for (int i = 0; i < n - 1; i++) {
        width = abs(A[i] - A[i + 1]);
        hight = abs(B[i] - B[i + 1]);

        if (hight >= width) {
            sum += width + (hight - width);
        }
        else {
            sum += hight + (width - hight);
        }
    }
    return sum;

}
