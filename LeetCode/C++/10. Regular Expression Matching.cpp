///LeetCode 10. Regular Expression Matching by C++
///write by LazyWolfLin in 17.03.10

class Solution {
public:
    bool isMatch(string s, string p)
    {
        if (p.size()==0) return s.size()==0;

        if (p[1]!='*')
        {
            return (p[0]==s[0]||(p[0]=='.'&&s[0]!='\0'))&&isMatch(s.substr(1),p.substr(1));
        }
        int x=0;
        while (p[0]==s[x]||(p[0]=='.'&&s[x]!='\0'))
        {
            if (isMatch(s.substr(x),p.substr(2))) return true;
            ++x;
        }
        return isMatch(s.substr(x),p.substr(2));
    }
};
