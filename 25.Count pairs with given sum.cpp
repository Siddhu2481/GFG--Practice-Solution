int count=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            if(m.find(k-arr[i])!=m.end())
            {
                count+=m[k-arr[i]];
                
            }
            m[arr[i]]++;
        }
        return count;
