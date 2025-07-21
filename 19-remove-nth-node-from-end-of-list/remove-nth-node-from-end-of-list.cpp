/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;

        // Step 1: Find length of linked list
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

          
        if (n == count) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        
        temp = head;
        for (int i = 1; i < count - n; i++) {
            temp = temp->next;
        }

         
        ListNode* front = temp->next;
        temp->next = front->next;
        delete front;

        return head;
    }
};
