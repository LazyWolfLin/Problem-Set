# LeetCode 8. String to Integer (atoi) by Python3
# write by LazyWolfLin in 18.08.09

class Solution:
    def myAtoi(self, str):
        """
        :type str: str
        :rtype: int
        """
        str = str.lstrip()
        sign_flag = 1
        if len(str) > 0 and str[0] == '+':
            sign_flag = 1
            str = str[1:]
        elif len(str) > 0 and str[0] == '-':
            sign_flag = -1
            str = str[1:]
        i = 0
        while i < len(str):
            if str[i] >= '0' and str[i] <= '9':
                i += 1
            else:
                break;
        str = str[:i]
        if len(str) == 0:
            return 0
        ans = int(str)
        if ans > 2147483647:
            return 2147483647 if sign_flag > 0 else -2147483648
        return sign_flag * ans