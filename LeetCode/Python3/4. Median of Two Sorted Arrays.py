# LeetCode 4. Median of Two Sorted Arrays by Python3
# write by LazyWolfLin in 18.07.27

class Solution:
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        m = len(nums1)
        n = len(nums2)
        if m > n:
            nums1, nums2 = nums2, nums1
            m, n = n, m
        l = 0
        r = m + 1
        half = (m + n + 1) // 2
        i = j = 0
        while l <= r:
            i = (l + r) // 2
            j = half - i
            if i > 0 and nums1[i - 1] > nums2[j]:
                r = i
            elif i < m and nums1[i] < nums2[j - 1]:
                l = i
            else:
                break
        ans = 0.0
        if i == 0:
            ans = nums2[j - 1]
        elif j == 0:
            ans = nums1[i - 1]
        else:
            ans = max(nums1[i - 1], nums2[j - 1])
        if (m + n) % 2 == 1:
            return ans
        if i == m:
            ans += nums2[j]
        elif j == n:
            ans += nums1[i]
        else:
            ans += min(nums1[i], nums2[j])
        return ans / 2.0