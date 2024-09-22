// Reversing a stack
#include<iostream>
#include<strings.h>
#include<stack>
using namespace std;
void InsertInBottom(stack<int> &s, int num)
{
	if(s.empty())
	{
		s.push(num);
		return ;
	}
	
	
	int number = s.top();
	s.pop();
	
	
	//recursive 
	InsertInBottom(s , num);
	
	s.push(number);
	
	
}

void ReverseStack(stack<int> &s)
{
	//base case
	if(s.empty())
	{
		
		return;
	}
	// store number
	int number = s.top();
	s.pop();
	
	// recersive call
	ReverseStack(s);
	InsertInBottom(s,number);
	
	
	
}

int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	
	stack<int> p = s;
	cout<<"\n Stack Before Reversing : "<<endl;
	while(!p.empty())
	{
		cout<<" "<<p.top()<<" ";
		p.pop(); 
	}
	
	cout<<endl;
	cout<<"\n Stack After Reversing : "<<endl;
	
	ReverseStack(s);
	while(!s.empty())
	{
		cout<<" "<<s.top()<<" ";
		s.pop();
	}
	

    return 0;

}
