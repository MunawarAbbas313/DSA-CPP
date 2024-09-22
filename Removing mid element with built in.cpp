// remvoing the middle  element by using built in Functionality 
#include<iostream>
#include<stack>
using namespace std;
void RemoveMiddleElem(stack<int> &s, int current, int size)
{
	if(current == size/2)
	{
		s.pop();
		return ;
	}
	
	// Store the remaning elements inside a variable
	int store = s.top();
	s.pop();
	
	// Use Recurive approch
	
	RemoveMiddleElem(s, current + 1, size);
	
	s.push(store);
}


int main()
{
   stack<int> s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(5);
   
    cout<<"\n Size of the stack before removel : "<<s.size();
   cout<<"\n Stack Before Removing middle : "<<endl;
  
  stack<int>temp = s;
   while(!temp.empty())
   {
   	  cout<<" "<<temp.top()<<" ";
   	  temp.pop();
   }
   
  
   int Size = s.size();
   RemoveMiddleElem(s, 0 , Size);
    cout<<"\n Size of the stack after the removel of Middel : "<<s.size()<<endl;
   cout<<"\n Stack after Removing Middle  : "<<endl;
   while(!s.empty())
   {
   	cout<<" "<<s.top()<<" ";
   	s.pop();
   }
   
  
    return 0;

}
