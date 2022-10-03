if( x == 1 )
    {
	   head = head->next;
	   return head;
	 }
     else
     {
	   int cnt = 1;
	   Node*  second = head;
	            
	   while( cnt < x-1 )
	   {
	     cnt++;
	     second = second->next;
	   }
	            
	    second->next = second->next->next;

	    return head;
	}      
