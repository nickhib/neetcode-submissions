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
    ListNode* head = new ListNode();
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* cur;

        for(int i = 1 ; i < lists.size();i++)
        {
            cur = mergeList(lists[i-1] , lists[i]);
            lists[i] = cur;
        }
        
        return head->next;
    }
    ListNode* mergeList(ListNode* l1,ListNode* l2)
    {
        ListNode* node = head;

        while(l1 || l2)
        {
            int value1 = l1 ? l1->val : 1001;
            int value2 = l2 ? l2->val : 1001;
            if(value1 < value2)
            {
                node->next = l1;
                node = node->next;
                l1 = l1->next;
            }
            else
            {
                node->next = l2;
                node = node->next;
                l2 = l2->next;
            }
        }

        return head->next;
    }
};
