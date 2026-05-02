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
    void reorderList(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = slow->next;
        slow->next = nullptr;
        slow = prev;
        prev = nullptr;
        ListNode* nextNode = slow;
        while(slow)
        {
            nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }
        slow = head;
        ListNode* nextNode2 = prev;
        while(prev)
        {
            nextNode = slow->next;
            nextNode2 = prev->next;
            slow->next = prev;
            prev->next= nextNode;
            slow = nextNode;
            prev = nextNode2;
        }
    }
};
