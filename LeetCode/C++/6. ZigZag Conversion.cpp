///LeetCode 6. ZigZag Conversion by C++
///write by LazyWolfLin in 17.03.05

class Solution {
public:
    string convert(string s, int numRows)
    {
        if (numRows==1) return s;
        string ans;
        int key=2*numRows-2;
        for (int x=0;x<s.size();x+=key) ans+=s[x];
        for (int i=1;i<numRows-1;++i)
        {
            for (int x=i;x<s.size();x+=key)
            {
                ans+=s[x];
                if (x+key-2*i<s.size()) ans+=s[x+key-2*i];
            }
        }
        for (int x=numRows-1;x<s.size();x+=key) ans+=s[x];
        return ans;
    }
};
