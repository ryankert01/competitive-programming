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
    ListNode* mergeList(ListNode* it1, ListNode* it2)
    {
        ListNode* ansBack = new ListNode;
        ListNode* aa = ansBack;
        ListNode* tp;
        while(it1 != nullptr && it2 != nullptr)
        {
            if(it1->val > it2->val)
            {
                tp = it2;   
                it2 = it2->next;
            }
            else
            {
                tp = it1;
                it1 = it1->next;
            }
            aa->next = tp;
            tp->next = nullptr;
            aa = aa->next;
        }
        if(it1 == nullptr) aa->next = it2;
        else aa->next = it1;
        //for(ListNode* i = ansBack->next; i!= nullptr; i = i->next)
            //cout << i->val << " ";
        //cout << endl;
        return ansBack->next;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        for(int i = 0; i< lists.size(); i++)
            if(lists[i] == nullptr)
                lists.erase(lists.begin()+i--);
        if(lists.size() == 0) return nullptr;
        if(lists.size() == 1) return lists[0];
        ListNode* ans = nullptr;
        ListNode* it1, it2;
        if(lists.size()%2==1)
            lists[lists.size()-2] = mergeList(lists[lists.size()-2], lists[lists.size()-1]);
        int t = lists.size()/2;
        for(int tt = t; tt != 0; tt /= 2)
        {
            for(int i = 0; i < tt; i++)
            {
                lists[i] = mergeList(lists[i], lists[i+tt]);                  
            }
            if(tt%2==1 && tt != 1)
            {
                lists[tt-2] = mergeList(lists[tt-2], lists[tt-1]);                
            }
        }

            
        return lists[0];
    }
};
