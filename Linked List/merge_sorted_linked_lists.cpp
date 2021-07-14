Node* sortedMerge(Node* head1, Node* head2)  
{  
    if(!head1)return head2;
    if(!head2)return head1;
    Node* head = NULL;
    Node**ref = &head;
    
    while(head1!= NULL && head2!= NULL){
        if(head1->data < head2->data){
            *ref = head1;
            head1 = head1->next;
        }
        else{
            *ref = head2;
            head2 = head2->next;
        }
        ref = &((*ref)->next);
    }
    *ref = (head1)?head1:head2;
    return head;
    
    
}
//Metho2

Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node* head = NULL;
    Node* temp = NULL;
    
    while(head1!= NULL && head2!= NULL){
        if(head1->data < head2->data){
            Node*temp1 = head1->next;
            head1->next = NULL;
            if(head==NULL){
                head = head1;
                temp = head;
            }
            else{
                temp->next = head1;
                temp = temp->next;
            }
            head1 = temp1;
        }
        else{
            Node*temp1 = head2->next;
            head2->next = NULL;
            if(head==NULL){
                head = head2;
                temp = head;
            }
            else{
                temp->next = head2;
                temp = temp->next;
            }
            head2 = temp1;
        }
        //cout<<temp->data<<" ";
    }
    temp->next = (head1)?head1:head2;
    
    return head;
    
    
}  
