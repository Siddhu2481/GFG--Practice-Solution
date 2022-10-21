vector<int> v;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
          mp[arr[i]]++;  
        }
        for(auto i:mp)
        {
            if(i.second>1)
            {
                v.push_back(i.first);
            }
        }
        if(v.size()==0)
        {
            v.push_back(-1);
            return v;
        }
        sort(v.begin(),v.end());
        return v;
