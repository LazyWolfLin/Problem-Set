///LeetCode 5. Longest Palindromic Substring by C++
///write by LazyWolfLin in 17.03.02
///Manacher Algorithms

class Solution {
public:
    string longestPalindrome(string s)
    {
        //initialize
        string t="$#";
        for (int i=0;i<s.size();++i)
        {
            t+=s[i];
            t+="#";
        }
        vector<int> f(t.size(),0);
        int x=0,r=0,ansLen=0,ansCenter=0;
        //calculation
        for (int i=1;i<t.size();++i)
        {
            f[i]=r>i?min(f[2*x-i],r-i):1;
            while (t[i+f[i]]==t[i-f[i]]) ++f[i];
            if (i+f[i]>r)
            {
                r=i+f[i];
                x=i;
            }
            if (f[i]>ansLen)
            {
                ansLen=f[i];
                ansCenter=i;
            }
        }

        return s.substr((ansCenter-ansLen)/2,ansLen-1);
    }
};
