int Solution::solve(vector<int> &arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            continue;
        if (arr[i] == n - i - 1)
            return 1;
    }
    if (arr[n - 1] == 0)
        return 1;
    return -1;
}
