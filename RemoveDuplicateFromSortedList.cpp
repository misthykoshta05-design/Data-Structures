class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* curr=head;
        while(curr!=NULL && curr->next!=NULL ){
            if(curr->val==curr->next->val){
                ListNode* Next_Next=curr->next->next;
                ListNode* nodetodel=curr->next;
                curr->next=Next_Next;
                 delete(nodetodel);
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};
