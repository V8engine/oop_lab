#include<iostream>
#include<stdlib.h>
using namespace std;

class Queue
{
		int queue[6];
		int front;
		int rear;
	public:		
		Queue()
		{
					front = 0;
					 rear = 0;
					
		}
		
		void insert(int q[])
		{
				for(int i=0; i<6; i++)
				{
						queue[i] = q[i];
				}
				
				
		
		}
		void del(void)
		{
				queue[front] = 0;
				++front;
				
		}
		void display()
		{
				if (front == rear)
				{
						cout<<"\n";
						cout<<"No elements are present";
				}
				for(int i = 0; i <= rear ; i++)
				{
								cout<<"\n";
								cout<<queue[i];
								
				
				}
		}

};
int main()
{
	
		Queue q1;
		int ele[6];
		int i;
		for(int  j=0;j<6;j++)
		{
				cin>>ele[i];
			
				
		}
		
		q1.insert(ele);
			

		q1.display();
		q1.del();
		q1.display();
		q1.del();
		q1.display();
		
		
return 0;


}


