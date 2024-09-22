#include<iostream>
#include<strings.h>
#include<stack>
using namespace std;

bool checkValidity(string exp)
{
	stack<char> s;
	for(int i=0; i<exp.length(); i++)
	{
		char ch = exp[i];
		
		if(ch == '{' || ch == '(' || ch == '[')
		{
			s.push(ch);
		}
		else
		{
			if(!s.empty())
			{
				int t = s.top();
				if((ch == '}' && t == '{') ||
				   (ch == ')' && t == '(') ||
				   (ch == ']' && t == '[')
				   
				)
				{
					s.pop();
				}
				else
				{
					return false;
				}
			}
		}
	}
	return s.empty();
}
int main()
{
	string s = "({[]})";
	// string s = " ({]}) unbalnced 
	
	if(checkValidity(s))
	{
		cout<<"\n The Parenthices are Balaanced : ";
	}
	else
	{
		cout<<"\n The Parenthicies are not Balanced : ";
	}
	

    return 0;

}
