sort(arr,arr+n);
	   int temp=arr[n-1];
	   for(int i=n-2;i>=0;i--){
	       if(arr[i]<temp)
	       {
	           
	         
	           return arr[i];
	       }
	 
  }
	   return -1;
