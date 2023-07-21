class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
       node * curr=head;
       node*prev=NULL;
       node*temp;
       int count=0;
       while(curr && count<k){
           temp=curr->next;
           curr->next=prev;
           prev=curr;
           curr=temp;
           count++;
       }
       if(temp){
           head->next=reverse(temp,k);
       }
       return prev;
    }
};
