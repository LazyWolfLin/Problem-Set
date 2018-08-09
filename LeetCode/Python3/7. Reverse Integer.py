# LeetCode 7. Reverse Integer by Python3
# write by LazyWolfLin in 18.08.06

class Solution:
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        y = 0
        if x > 0:
            y = int(str(x)[::-1])
        if x < 0:
            y = int("-" + str(-x)[::-1])
        return y if y >= -2147483648 and y <= 2147483647 else 0