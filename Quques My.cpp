#include<iostream>
using namespace std;
class Queues{
	public:
		int size;
		int *arr;
		int front;
		int rare;
		
		// constructor 
		
		Queues(int size)
		{
			this->size = size;
			front = -1;
			rare = -1;
			// Giving sive dynamcillay 
			arr = new int[size];
		}
		
		// Methods 
		
		//Full
		bool isFull(){
			// When rare becoms equal to front it means Queue is full
			// modulo operator 1%5 = 1 , 2%5 = 2 , 5%5 = 0;
			return (rare + 1)%5 == front;
		}
		// Pushing Method
		
		int Inqueue(int element)
		{
			if(isFull())
			{
				cout<<"\n Queue is Full Cannnot Push More : "<<endl;
			}
			else
			{
				if(front == -1)
				{
					front = 0;
				}
				// Increment Rere with modulou operator
				rare = (rare + 1)%size;
				arr[rare] = element;
				cout<<"\n "<<element <<" : Pushed in Queue : "<<endl;
			}
		}
		  
	   // Now IsEmpty Method
	   
	   bool isEmpty()
	   {
	   	return front == -1;
	   }
	   
	   // Pop method
	   
	   int Dequeue()
	   {
	   	   if(isEmpty())
	   	   {
	   	   	
	   	   	cout<<"\n Queue is Empty : Add Something First to Dequque : "<<endl;
		   }
		   else
		   {
		   	  int ans = arr[front];
		   	  // if front and rare becomes equal rest the queue 
		   	  // after reacing the limit i.e front = 0 and rare == 0;
		   	  // queue qill use rest if statemmnt 
		   	  
		   	  if(front == rare)
		   	  {
		   	  	rare = -1;
		   	  	front = -1;
				 }
				 else
				 {
				 	// modulor incremnt of Front 
				 	return front = (front + 1) % size;
				 }
		   }
	   }
	   
	   int SizeOf()
	   {
	      if(size > 0)
	      {
	      	cout<<"\n Size of Queue is = : "<<size<<endl;
		  }
		  else
		  {
		  	cout<<"\n No Size Speicified : "<<endl;
		  }
	   }
	int Front()
	{
		return arr[front];
	}
	
	int Rare()
	{
		return arr[rare];
	}
};
int main()
{
	Queues Q(5);
	Q.SizeOf();
	Q.Inqueue(5);
	Q.Inqueue(7);
	Q.Inqueue(4);
	Q.Inqueue(11);
	Q.Inqueue(9);

	
	cout<<endl;
	cout<<"\n Before Dequing : "<<endl;
	cout<<"\n First Element of Queue is : "<<Q.Front()<<endl;
	cout<<"\n last Element of Queue is : "<<Q.Rare()<<endl;
	
	cout<<endl;
	
	cout<<"\n Dequeing : "<<endl;
	Q.Dequeue();
	Q.Dequeue();
	cout<<"\n After Dequing : "<<endl;
	cout<<"\n First Element of Queue is : "<<Q.Front()<<endl;
	cout<<"\n last Element of Queue is : "<<Q.Rare()<<endl;
	
	

    return 0;

}
