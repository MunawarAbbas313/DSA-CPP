#include<iostream>
#include<stack>
#include<string> // Use <string> instead of <strings.h>
using namespace std;

bool isValidParanthisis(string expression)
{
    stack<char> s;
    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i];
        // For checking opening brackets 
        if (ch == '{' || ch == '[' || ch == '(')
        {
            s.push(ch);
        }
        // For checking closing brackets
        else
        {
            if (!s.empty())
            {
                char t = s.top();
                if ((ch == '}' && t == '{') ||
                    (ch == ']' && t == '[') ||
                    (ch == ')' && t == '('))
                {
                    s.pop();
                }
            }
            else
            {
                return false; // Unmatched closing bracket
            }
        }
    }

    return s.empty(); // Return true if stack is empty (balanced)
}

int main()
{
    string symbols = "{([])}";

    if (isValidParanthisis(symbols))
    {
        cout << "\n Balanced Parenthesis: " << endl;
    }
    else
    {
        cout << "\n Not balanced: " << endl;
    }

    return 0;
}
