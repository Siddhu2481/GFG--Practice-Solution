vector<int> s;
       int m=array1.size();
       int n=array2.size();
       for(int i=0;i<m;i++)
       {
           s.push_back(array1[i]);
       }
       for(int j=0;j<n;j++)
       {
           s.push_back(array2[j]);
       }
       sort(s.begin(),s.end());
       int a=s.size();
       if(a%2==0)
       {
           return (double)(s[a/2]+s[a/2-1])/2;
       }
       else
       return (double)s[a/2];
