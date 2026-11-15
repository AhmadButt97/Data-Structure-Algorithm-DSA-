class Solution {
public:
    ListNode* removeElements(ListNode* head, int value) 
    {
        // Remove matching head nodes
        while (head != NULL && head->val == value) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        // Initialize pointers
        ListNode* curr = head;
        ListNode* prev = NULL;

        // Traverse and remove matching nodes
        while (curr != NULL) {
            if (curr->val == value) {
                prev->next = curr->next; // Bypass the current node
                delete curr;             // Delete the node
                curr = prev->next;       // Move to the next node
            } else {
                prev = curr;             // Move prev forward
                curr = curr->next;       // Move curr forward
            }
        }

        return head;
    }
};
