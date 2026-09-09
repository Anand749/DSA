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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* temp = head;

        while (temp != NULL) {
            ListNode* nxt = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nxt;
        }
        return prev;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;
        int n = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            n++;
            temp = temp->next;
        }
        k = k % n;
        if (k == 0)
            return head;

        temp = head;

        for (int i = 1; i < n - k; i++) {
            temp = temp->next;
        }

        ListNode* l2 = temp->next;
        temp->next = NULL;

        ListNode* newHeadL1 = reverse(head);
        ListNode* newHeadL2 = reverse(l2);

        temp = newHeadL1;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newHeadL2;

        ListNode* ans = reverse(newHeadL1);
        return ans;
    }
};