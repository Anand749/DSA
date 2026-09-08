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
        int cnt = 0 ;
        ListNode* temp = head;

        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        if (n == cnt) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
    
        temp = head;

        for (int i = 0; i < cnt - n-1; i++) {
            temp = temp->next;
        }
        ListNode* front = temp->next;
        temp->next = front->next;
        delete front;

        return head;
    }
};