class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* i = head;
        ListNode* j = head->next;

        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        while (j != NULL) {
            if (i->val == j->val) {
                j = j->next;
            }
            else {
                if (i->next != j) {
                    i = j;
                    j = j->next;
                }
                else {
                    
                    dummy->next = i;
                    dummy = dummy->next;

                    i = j;
                    j = j->next;
                }
            }
        }

       
        if (i->next == j) {
            dummy->next = i;
            dummy = dummy->next;
        }

        dummy->next = NULL;

        return temp->next;
    }
};