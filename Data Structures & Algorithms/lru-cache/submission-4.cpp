class LRUCache {
public:

    struct ListNode{
        int val;
        int key;
        ListNode* next = nullptr;
        ListNode* prev = nullptr;
        ListNode() : val(-1), key(-1) , next(nullptr) {};
        ListNode(int value, int myKey) : val(value), key(myKey) , next(nullptr) {};
    };
    ListNode* head = new ListNode();
    ListNode* tail = new ListNode();
    int size = 0;
    unordered_map<int, ListNode*> umap;
    int cap;
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    void insert(ListNode* node)
    {
        ListNode* prev = tail->prev;
        ListNode* nxt = tail;
        prev->next = node;
        nxt->prev = node;
        node->next = nxt;
        node->prev = prev;
    }
    void remove(ListNode* node)
    {
        ListNode* prev = node->prev;
        ListNode* nxt = node->next;
        prev->next = nxt;
        nxt->prev = prev;
    }
    
    int get(int key) {
        if(umap.count(key)){//if it exists remove then insert to reset position.
            remove(umap[key]);
            insert(umap[key]);
            return umap[key]->val;
        }
      return -1;
    }
    
    void put(int key , int value) {
        if(umap.count(key))
        {
            remove(umap[key]);
            ListNode* node = new ListNode(value,key);
            umap[key] = node;
            insert(umap[key]);
        }
        else
        {
            ListNode* node = new ListNode(value,key);
            umap[key] = node;
            insert(umap[key]);
            size++;
            
            if(size>cap)
            {
                cout << key << head->next->key<< endl;
                umap.erase(head->next->key);
                remove(head->next);

            }

        }

    }
    
};
