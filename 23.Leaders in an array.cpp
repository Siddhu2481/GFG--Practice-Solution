vector<int> value;
        int max=a[n-1];
        value.push_back(max);
   
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]>=max)
        {
            value.push_back(a[i]);
            max=a[i];
        }
        
    }
    reverse(value.begin(),value.end());
      return value;
