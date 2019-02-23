/// LeetCode 5. Longest Palindromic Substring by C++
/// write by LazyWolfLin in 17.03.02

/// Manacher Algorithms
class Solution
{
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
        int current_center=0,current_right=0,ans_len=0,ans_center=0;
        //calculation
        for (int i=1;i<t.size();++i)
        {
            f[i]=current_right>i?min(f[2*current_center-i],current_right-i):1;
            while (t[i+f[i]]==t[i-f[i]]) ++f[i];
            if (i+f[i]>current_right)
            {
                current_right=i+f[i];
                current_center=i;
            }
            if (f[i]>ans_len)
            {
                ans_len=f[i];
                ans_center=i;
            }
        }
        return s.substr((ans_center-ans_len)/2,ans_len-1);
    }
};
