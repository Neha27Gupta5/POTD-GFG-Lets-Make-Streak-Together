class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
    unordered_map<int , int> m;
    Node*ptr=head;
    Node*prev;
    // Node*temp=ptr->next;
    while(ptr!=NULL){
      
      if(m[ptr->data]){
          prev->next=ptr->next;
          ptr=prev->next;
      } 
       else{
            m[ptr->data]++;
       prev=ptr;
       ptr=ptr->next;
       } 
      
    }
    
   return head; 
    }
};
