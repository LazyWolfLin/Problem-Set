///LeetCode 9. Palindrome Number by C++
///write by LazyWolfLin in 17.03.09

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x<0) return false;
        int bit=1;
        while (x/bit>=10) bit*=10;
        while (x!=0)
        {
            if (x/bit!=x%10) return false;
            x=(x%bit)/10;
            bit=bit/100;
        }
        return true;
    }
};
