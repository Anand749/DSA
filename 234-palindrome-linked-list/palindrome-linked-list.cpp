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
    ListNode* reverseList(ListNode* head){
       if(head==NULL || head->next==NULL)return head;

        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* nextNode = curr->next; 
            curr->next = prev;                
            prev = curr;                      
            curr = nextNode;                 
        }

        return prev; 
    }
public:
    bool isPalindrome(ListNode* head) {
       if(head==NULL || head->next==NULL)return true;

       ListNode* slow=head;
       ListNode* fast=head;

       while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

       }

       ListNode* newHead=reverseList(slow->next);
       ListNode* first=head;
       ListNode* second=newHead;

       while(second!=NULL){
        if(first->val != second->val){
            reverseList(newHead);
            return false;
        }
        second=second->next;
        first=first->next;
       }


       return true;
    }
};