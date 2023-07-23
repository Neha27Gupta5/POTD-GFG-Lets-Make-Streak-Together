class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
         
         unordered_map<int,int>m;
         Node * temp=head;
         while(temp!=NULL){
            m[(temp->data)]++; 
            temp=temp->next;
         }
        Node *ptr=head;
         while(m[0]--){
             ptr->data=0;
             ptr=ptr->next;
         }
         while(m[1]--){
             ptr->data=1;
             ptr=ptr->next;
         }
         while(m[2]--){
             ptr->data=2;
             ptr=ptr->next;
         }
         
         return head;
    }
};
