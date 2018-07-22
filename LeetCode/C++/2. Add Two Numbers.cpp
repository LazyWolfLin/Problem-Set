/// LeetCode 2. Add Two Numbers by C++
/// write by LazyWolfLin in 16.09.09

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode head(0), *tail = &head;
        while (l1 || l2 || tail->val > 9)
        {
            tail->next = new ListNode((l1 ? l1->val : 0) + (l2 ? l2->val : 0) + (tail->val > 9 ? 1 : 0));
            tail->val = tail->val % 10;
            tail = tail->next;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        return head.next;
    }
};