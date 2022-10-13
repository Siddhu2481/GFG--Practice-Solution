vector<int> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(arr1[i]);
        }
        for(int i=0;i<m;i++)
        {
            v.push_back(arr2[i]);
        }
        sort(v.begin(),v.end());
        int a=v[k-1];
        return a;
