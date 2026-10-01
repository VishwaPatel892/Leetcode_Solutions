class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) {
            return list2;
        }
        if (list2 == NULL) {
            return list1;
        }

        ListNode* head = NULL;
        ListNode* temp = NULL;

        ListNode* i = list1;
        ListNode* j = list2;
        if (i->val <= j->val) {
            head = i;
            i = i->next;
        } else {
            head = j;
            j = j->next;
        }

        temp = head;

        while (i != NULL && j != NULL) {
            if (i->val <= j->val) {
                temp->next = i;
                i = i->next;
            } else {
                temp->next = j;
                j = j->next;
            }

            temp = temp->next;
        }

        if (i != NULL) {
            temp->next = i;
        } else {
            temp->next = j;
        }

        return head;
    }
};
