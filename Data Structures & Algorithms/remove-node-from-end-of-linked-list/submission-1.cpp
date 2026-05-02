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
        ListNode* cur = head;
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* prev = dummy;
        int i = 0;
        while(i < n &&cur)
        {
            cur = cur->next;
            i++;
        }
        while(cur)
        {
            prev = prev->next;
            cur =cur->next;
        }
        cur = prev->next;
        prev->next = prev->next->next;
        delete cur; 
        return dummy->next;
        
    }
};
