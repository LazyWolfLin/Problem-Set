///LeetCode 17. Letter Combinations of a Phone Number by C++
///write by LazyWolfLin in 17.03.26

class Solution
{
    const string letter[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        if (digits.length()>0)
        {
            vector<string> tmp=letterCombinations(digits.substr(1));
            if (tmp.size()==0) tmp.push_back("");
            for (int i=0;i<letter[digits[0]-'0'].size();++i)
            {
                for (int j=0;j<tmp.size();++j)
                {
                    ans.push_back(letter[digits[0]-'0'][i]+tmp[j]);
                }
            }
        }
        return ans;
    }
};
