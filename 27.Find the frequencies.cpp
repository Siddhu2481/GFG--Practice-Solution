unordered_map<int,int> mp;
    for(auto it:v)
    {
        if(it==x)
        {
            mp[x]++;
        }
    }
   if(mp.size()!=0)
    {
        return mp[x];
    }
    return 0;
