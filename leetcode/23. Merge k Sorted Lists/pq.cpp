// although this solution is slower, but it use priorty queue and recursive, and shorter.


class Solution {
public:
    ListNode* merge(priority_queue<pair<int,ListNode*>> &pq)
    {
        // solve this problem recursively
        if(pq.empty())
            return nullptr;
        ListNode* top = pq.top().second;
        pq.pop();
        ListNode* root = new ListNode(top->val);
        if(top->next != nullptr) 
            pq.push(make_pair(-top->next->val, top->next));
        root->next = merge(pq);
        return root;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        //make priority queue
        priority_queue<pair<int,ListNode*>>pq;
        for(ListNode* i : lists)
            if(i != nullptr)
                pq.push(make_pair(-i->val, i));
        
        return merge(pq);
    }
};
