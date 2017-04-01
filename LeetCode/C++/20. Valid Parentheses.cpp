///LeetCode 20. Valid Parentheses by C++
///write by LazyWolfLin in 17.04.01

class Solution
{
    stack<char> Stack;
public:
    bool isValid(string s)
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                Stack.push(s[i]);
            }
            else
            {
                if (Stack.empty()) return false;
                if ((s[i] == ')' && Stack.top() == '(')
                || (s[i] == '}' && Stack.top() == '{')
                || (s[i] == ']' && Stack.top() == '['))
                    Stack.pop();
                else return false;
            }
        }
        return Stack.empty();
    }
};
