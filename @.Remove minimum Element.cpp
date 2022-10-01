        sort(arr, arr + n);
        int maxLen = 0;
        for (int i = 0; i < n; i++)
        {
        int ind = upper_bound(arr, arr + n, 2 * arr[i]) - arr;
        maxLen = max(maxLen, ind - i);
        }
        return n - maxLen;
