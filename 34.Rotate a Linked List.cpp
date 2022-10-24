if(head==NULL || head->next==NULL || k==0)
        {
            return head;
        }
        Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=head;
        while(k--)
        {
            temp=temp->next;
            
        }
        
