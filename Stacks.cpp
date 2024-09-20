#include <iostream>
//Stack is a data structrue that works on phenomena of LIFO last input first output
using namespace std;

class Stack {
public:
    int size;
    int *arr;
    int top;
    int counter;

    Stack(int size) {  // Use a constructor parameter for size
        this->size = size;
        arr = new int[size];  // Allocate memory
        top = -1;  // Initialize top to -1 (empty stack)
        counter = size;
    }

  

    void push(int element) {
        if (top < size - 1) {  // Check for full stack before pushing
            top++;
            arr[top] = element;
            counter--;
        } else {
            cout << "\n Stack is already full." << endl;
        }
    }

    int pop() {
        if (top >= 0) {
           
            top--;
           
        } else {
            cout << "\n Stack is underflow (empty)." << endl;
            return -1; // Indicate underflow
        }
    }

    int Top() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "\n Stack is empty." << endl;
            return -1; // Indicate underflow
        }
    }

    bool isEmpty() {
        if(top == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
    }
    void showSize()
    {
    	cout<<"\n Size of Stack is : "<<size<<endl;
	}
	void showRemainingSize()
	{
		cout<<"\n Remaning size of Stack is : "<<counter;
	}
};

int main() {
    Stack s(5);

    // Pushing elements
      s.push(5);
      s.push(10);
      s.push(11);
      s.push(12); 
      s.push(15);
    
    cout << s.Top() << endl; // Output: 12
    
    if(s.isEmpty())
    {
    	cout<<"Its Empty";
	}
	else{
		cout<<"\n Its not empty"<<endl;
	}
    
   s.showSize();
   s.showRemainingSize();
    return 0;
}
