/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node)
            return nullptr;
        unordered_map<Node*,Node*> umap;
        stack<Node*> s;
        Node* head = new Node(node->val);
        umap[node] = head;
        for(int i = 0 ; i < node->neighbors.size();i++)//push all neighbors onto stack
        {
            if(!umap.count(node->neighbors[i]))
            {
                s.push(node->neighbors[i]);
                umap[node->neighbors[i]] = new Node(node->neighbors[i]->val);
            }
        }
        while(!s.empty())
        {
            Node* cur = s.top();
            s.pop();
            for(int i = 0 ; i < cur->neighbors.size();i++)//push all neighbors onto stack
            {
                if(!umap.count(cur->neighbors[i]))
                {
                    s.push(cur->neighbors[i]);
                    umap[cur->neighbors[i]] = new Node(cur->neighbors[i]->val);
                }
            }
        }
        for(auto [node1,node2] : umap)
        {
            for(auto i : node1->neighbors)
            {
                node2->neighbors.push_back(umap[i]);
            }
        }
        return umap[node];
        
    }
    /*
        i created a deep copy of each node and inserted into a map
        the map takes the original node and points to new. 
        we go through all neighbors not visited making deep copies and
        pushes them onto the map to not visit already visited nodes.
        once we gather all nodes we then loop through the map 
        and build out the vector for each node using the map with nodes as the keys
        for the new ones. 
    */
};
