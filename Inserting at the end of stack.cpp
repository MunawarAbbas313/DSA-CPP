#include<iostream>
#include<stack>
#include<strings.h>
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
int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	int x = 0;
	cout<<"\n Enter the number you want to insert in Bottom of stack : ";
	cin>>x;
	InsertInBottom(s, x);
    
    cout<<"\n Stack after Pushing Number : "<<endl;
    while(!s.empty())
    {
    	cout<<" "<<s.top()<<" ";
    	s.pop();
	}
    return 0;

}
