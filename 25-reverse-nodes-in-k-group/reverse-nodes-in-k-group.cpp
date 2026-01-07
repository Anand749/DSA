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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* temp = head;

        while (temp != NULL) {
            ListNode* front = temp->next;
            temp->next = prev;
             prev = temp;
            temp = front;
        }

        return prev;
    }

    ListNode* FindKthNode(ListNode* head, int k) {
        ListNode* temp = head;
        int count = 1;
        while (temp) {
            if (count == k) {
                return temp;
            }
            temp = temp->next;
            count++;
        }
        return nullptr;
    }

public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* prev = nullptr;
        ListNode* temp = head;
        while (temp) {
            ListNode* kth = FindKthNode(temp, k);
            if (kth == nullptr) {
                if (prev) {
                    prev->next = temp;
                }
                break;
            }

            ListNode* nextnode = kth->next;
            kth->next = nullptr;
            ListNode* reversed = reverseList(temp);
            if (temp == head) {
                head = kth;
            } else {
                prev->next = kth;
            }

            prev = temp;
            temp = nextnode;
        }
        return head;
    }
};