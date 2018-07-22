# LeetCode 2. Add Two Numbers by Python3
# write by LazyWolfLin in 18.07.22

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        head = tail = ListNode(0)
        while l1 or l2 or tail.val > 9:
            tail.next = ListNode((l1.val if l1 else 0) + (l2.val if l2 else 0) + (1 if tail.val > 9 else 0))
            tail.val = tail.val % 10
            tail = tail.next
            l1 = l1.next if l1 else l1
            l2 = l2.next if l2 else l2
        return head.next