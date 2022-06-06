/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// solution:
// https://leetcode.com/problems/intersection-of-two-linked-lists/discuss/1092898/JS-Python-Java-C%2B%2B-or-Easy-O(1)-Extra-Space-Solution-w-Visual-Explanation
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA,* b = headB;
        while(a != b)
        {
            a = a == nullptr ? headB : a->next;
            b = b == nullptr ? headA : b->next;
        }
        return a;
    }
};
