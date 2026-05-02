/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* cur = head;
        Node* dummy = new Node(0);
        
        unordered_map<Node*,Node*> umap;

        while(cur)
        {
            umap[cur] = new Node(cur->val);
            cur = cur->next;
        }
        cur = head;
        while(cur)
        {
            if(cur->random){
                umap[cur]->random = umap[cur->random];
            }
            if(cur->next)
                umap[cur]->next = umap[cur->next];
            cur = cur->next;
        }
        cur = head;
        return umap[cur];
    }
};
