#include<iostream>
// solving by creating a stack and implemnting the functionlaity
using namespace std;
class stack{
	public:
		int top;
		int *arr;
		int size;
		
		// constructor 
		stack(int size)
		{
			this->size = size;
			arr = new int [size];
			top = -1;
		}
		// methods 
		//isEmpty or isFull
		void isFull()
		{
			if(top == size-1)
			{
				cout<<"\n Stack is Full : IsFull function : "<<endl;
			}
			
		}
		bool isEmpty()
		{
			if(top == -1)
			{
				
				return true;
			}
			else{
			
				return false;
			}
		}
		void push(int element)
		{
			if(top < size -1)
			{
				top++;
				arr[top] = element;
			}
			else{
				isFull();
			}
		}
		void pop()
		{
			if(top >=0)
			{
				top--;
			}
			else
			{
				isEmpty();
			}
		}
		
		int Top(){
			if(top >= 0)
			{
				return arr[top];
			}
			else
			{
				isEmpty();
				return -1;
			}
		}
		int Size(){
			return top+1;
		}
};

void RemoveMiddleElement(stack &s, int count, int size)
{   
	if(count == size/2)
	{
	
		s.pop();
		return ;
    } 
    
    int num = s.Top();
    s.pop();
    
    // using Recursive methods 
    RemoveMiddleElement(s, count + 1, size);
    
    // push
    s.push(num);
    
}

int main()
{
	stack s(5);
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	
    stack temp = s;
	cout<<"\n Stack Before Remvoing the Middle Element : "<<endl;
	while(!temp.isEmpty())
	{
		cout<<temp.Top()<<" ";
		temp.pop();
	}
	
	cout<<"\n Size of Stack is : "<<s.Size()<<endl;
	
	int SIZE = s.Size();
	
	cout<<"\n Stack After Removing the Middle Element : ";
	
	RemoveMiddleElement(s, 0, SIZE );
	
	while(!s.isEmpty())
	{
		cout<<s.Top()<<" ";
		s.pop();
	}
	
	
	
	return 0;
}