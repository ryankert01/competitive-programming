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
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* mid = findMid(head);
        ListNode* fir = sortList(head);
        ListNode* sec = sortList(mid);
        return merge(fir, sec);
    }
    
    ListNode* merge(ListNode* fir, ListNode* sec){
        ListNode Header;
        ListNode* ptr = &Header;
        while(fir && sec)
        {
            if(fir->val < sec->val)
            {
                ptr->next = fir;
                ptr = ptr->next;
                fir = fir->next;
            }
            else
            {
                ptr->next = sec;
                ptr = ptr->next;
                sec = sec->next;
            }
        }
        if(fir)
            ptr->next = fir;
        else
            ptr->next = sec;
        
        return Header.next;
    }
    
    ListNode* findMid(ListNode* head){
        ListNode* midPrev = nullptr;
        
        while(head && head->next)
        {
            midPrev = (midPrev == nullptr) ? head : midPrev->next;
            head = head->next->next;
        }
        ListNode* mid = midPrev->next;
        midPrev->next = nullptr;
        
        return mid;
    }

};
