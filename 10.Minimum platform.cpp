sort(arr,arr+n);
        sort(dep,dep+n);
        int plat=1,result=1;
    	int i=1,j=0;
    	while(i<n && j<n)
    	{
    	    if(arr[i]<=dep[j])
    	    {
    	        plat++;
    	        i++;
    	    }
    	    else if(arr[i]>dep[j])
    	    {
    	        plat--;
    	        j++;
    	    }
    	    if(plat>result)
    	    {
    	        result=plat;
    	    }
    	}
    	return result;
