vector<int> singleNumber(vector<int> nums) 
    {
        int n=nums.size();
        vector<int> v;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second==1)
            {
                v.push_back(it.first);
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
