///LeetCode 12. Integer to Roman by C++
///write by LazyWolfLin in 17.03.21

class Solution {
public:
    string intToRoman(int num)
    {
        string table[4][10]=
        {
            {"","I","II","III","IV","V","VI","VII","VIII","IX"},
            {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
            {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
            {"","M","MM","MMM","","","","","",""}
        };
        string ans;
        int i=0;
        while (num)
        {
            ans=table[i++][num%10]+ans;
            num=num/10;
        }
        return ans;
    }
};
