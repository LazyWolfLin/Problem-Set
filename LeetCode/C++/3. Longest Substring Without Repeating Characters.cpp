///LeetCode 3. Longest Substring Without Repeating Characters by C++
///write by LazyWolfLin in 16.09.10

/*
class Solution
{
public:
    bool letter[128];
    int lengthOfLongestSubstring(string s)
    {
        size_t l=0,r=0;
        int ans=0;
        memset(letter,false,sizeof(letter));
        while (l<s.size())
        {
            while (r<s.size())
            {
                if (letter[s[r]]) break;
                letter[s[r]]=true;
                if (r-l+1>ans) ans=r-l+1;
                r++;
            }
            while (l!=r)
            {
                letter[s[l]]=false;
                l++;
                if (s[l-1]==s[r]) break;
            }
        }
        return ans;
    }
};
*/

class Solution
{
public:
    int letter[128];
    int lengthOfLongestSubstring(string s)
    {
        int l=0,r=0;
        int ans=0;
        memset(letter,0,sizeof(letter));
        while (r<s.size())
        {
            l=max(l,letter[s[r]]);
            ans=max(ans,r-l+1);
            letter[s[r]]=r+1;
            r++;
        }
        return ans;
    }
};
