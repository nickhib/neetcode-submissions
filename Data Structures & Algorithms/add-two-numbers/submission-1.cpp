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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
               ListNode* dummy = new ListNode();
        ListNode* cur = dummy;
        int carry=0;
        while(l1 || l2)
        {
            int value1 = l1 ? l1->val : 0;
            int value2 = l2 ? l2->val : 0;
            int add = value1 + value2 +carry;
            if(carry > 0)
                carry--;
            if(add> 9)
            {
                add = add%10;
                carry++;
            }

            cur->next = new ListNode(add);
            cur = cur->next;
            if(l1)
            l1 = l1->next;
            if(l2)
                l2 = l2->next;
        }
        if(carry)
        {
            cur->next = new ListNode(carry);
         
        }

        return dummy->next;
    }
};
