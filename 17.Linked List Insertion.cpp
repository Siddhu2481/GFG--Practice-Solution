Node *insertAtBegining(Node *head, int x) {
       Node *n=new Node(x);
       if(head==NULL)
       {
           return n;
       }
       n->next=head;
       return n;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node *n=new Node(x);
       
       if(head==NULL)
       {
           
           return n;
       }
       Node *temp=head;
       while(temp->next!=NULL){
           temp=temp->next;
       }
       temp->next=n;
       return head;
    }
