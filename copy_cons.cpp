#include<iostream>

using namespace std;

class code
{

	int id;

	public:	
		code(){}
		code(int a){
		id = a;
		}
		code(code &x)
		{
			id = x.id;
		}
		void display(void)
		{
			cout<<id;
		}

}; 
int main()

{

	code A(100);
	code B(A);
	code C = A;

	code D;// D is created not initialized
	D = A;//copy constructor not called
	

	cout<<"\n id of a is:";A.display();
	cout<<"\n id of b is:";B.display();
	cout<<"\n id if c is:";C.display();
	cout<<"\n id of D is:";D.display();		


}



















