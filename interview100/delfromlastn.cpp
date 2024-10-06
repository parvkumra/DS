class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        for(int i=1;i<=n;i++){
          temp=temp->next;
        }
        if(temp==nullptr){
            return head->next;
        }
        ListNode* prev=head;
        while(temp!=nullptr && temp->next!=nullptr){
            prev=prev->next;
            temp=temp->next;
        }
        prev->next=prev->next->next;
        return head;
    }
};