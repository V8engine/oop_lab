#include<iostream>

using namespace std;

class code
{
	int id;
	
	public:
	code(){}
	
	code(int a){ id = a; }
	
	code(code &x)
	{
		this->id = x.id;
	
	}

	void display(void)
	{
		cout << this->id;
	}


};


int main()
{

		code A(100);
		code B(A);
		code C = A;
		
		code D;
		D = A;
		
		cout<<"\n id of a is : ",A.display();
		cout<<"\n id of b is : ",B.display();
		cout<<"\n id of c is : ",C.display();
		cout<<"\n id of d is : ",D.display();
}			








