unordered_map<int,int> mp;
        for(int i=0;i<N;i++)
        {
            mp[arr[i]]++;
        }
        for(int i=0;i<N;i++)
        {
            arr[i]=mp[i+1];
        }
