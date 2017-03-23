///LeetCode 8. String to Integer (atoi) by C++
///write by LazyWolfLin in 17.03.08

class Solution
{
public:
    int myAtoi(string str)
    {
        if (str.size()==0) return 0;
        long long ans=0;
        int SignFlag=1,i=0;
        while (str[i]==' ') i++;
        if (str[i]=='+')
        {
            SignFlag=1;
            i++;
        }
        else if (str[i]=='-')
        {
            SignFlag=-1;
            i++;
        }
        while (i<str.size())
        {
            if (str[i]>='0' && str[i]<='9')
            {
                ans=ans*10+(str[i]-'0');
                if (ans>INT_MAX)
                    return SignFlag<0?INT_MIN:INT_MAX;
            }
            else break;
            i++;
        }
        ans*=SignFlag;
        return ans;
    }
};
