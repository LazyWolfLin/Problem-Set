///LeetCode 13. Roman to Integer by C++
///write by LazyWolfLin in 17.03.22

class Solution
{
public:
    int romanToInt(string s)
    {
        //initialize
        map<char,int> value_map;
        value_map.insert(make_pair('I',1));
        value_map.insert(make_pair('V',5));
        value_map.insert(make_pair('X',10));
        value_map.insert(make_pair('L',50));
        value_map.insert(make_pair('C',100));
        value_map.insert(make_pair('D',500));
        value_map.insert(make_pair('M',1000));
        int ans=0;
        //calculation
        for (int i=0;i<s.size();++i)
        {
            if (value_map[s[i]]<value_map[s[i+1]])
            {
                ans-=value_map[s[i]];
            }
            else
            {
                ans+=value_map[s[i]];
            }
        }
        return ans;
    }
};
