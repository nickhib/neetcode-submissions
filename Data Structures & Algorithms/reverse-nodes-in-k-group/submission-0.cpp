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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0,head);
        ListNode* cur = head;
        ListNode* prev = dummy;

        int size = 0;
        while(cur)
        {
            size++;
            if(size == k)
            {
                ListNode* startGroup = prev->next;
                ListNode* nextGroup = cur->next;
                prev->next = reverse(prev->next,k);
                startGroup->next = nextGroup;
                prev = startGroup;
                cur = nextGroup;
                size=0;
            }
            else{
                cur = cur->next;
            }
        }
        return dummy->next;
      
    }
    ListNode* reverse(ListNode* begin , int k )
    {
        ListNode* prev = nullptr;
        ListNode* temp = nullptr;
        int size = 0;
        ListNode* cur = begin; 
        while(cur)
        {
            size++;
            temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
            if(size >= k)
                break;
        }

        return prev;
    
    }
};
