#include<iostream>
#include<stack>
#include<strings.h>
using namespace std;
int main()
{
	string name = "Munawar ";
	
	stack<char> s;
	
	for(int i=0; i<name.length(); i++)
	{
		char ch = name[i];
		s.push(ch);
	}
	string ans = " ";
	
	while(!s.empty())
	{
		char c = s.top();
		//push_back() is a function in C++'s std::string class. It appends a character to the end of the string.
		//In this case, ans.push_back(c); is adding each popped character c from the stack to the string ans.
		ans.push_back(c);
		s.pop();
		
	}
    cout<<"\n Reversed is : "<<ans<<endl;
    return 0;

}
