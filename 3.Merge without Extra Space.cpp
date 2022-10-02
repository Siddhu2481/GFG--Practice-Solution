            vector<int> s;
            for(int i=0;i<n;i++)
            {
                s.push_back(arr1[i]);
            }
            for(int j=0;j<m;j++)
            {
                s.push_back(arr2[j]);
            }
            sort(s.begin(),s.end());
            for(int k=0;k<n;k++)
            {
                arr1[k]=s[k];
            }
            for(int k=0;k<m;k++)
            {
                arr2[k]=s[k+n];
            }
