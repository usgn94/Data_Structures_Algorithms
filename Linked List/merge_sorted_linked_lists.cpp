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
