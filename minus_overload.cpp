#include<iostream>
#include<stdio.h>
using namespace std;

class space
{
	int x;
	int y;
	int z;
	
	public:
		void getdata(int a, int b, int c);
		void display(void);
		void operator -(void);
	
};

void space :: getdata(int a, int b, int c)
{
		this->x = a;
		this->y = b;
		this->z = c;

}
void space :: display(void)
{
		cout<< this->x << " ";
		cout<< this->y << " ";
		cout<< this->z << " ";

}

void space :: operator-(void)
{
		this->x = -x;
		this->y = -y;
		this->z = -z;	

}

int main()
{

	space S;
	
	S.getdata(10, -20, 30);
	cout<< "S : ";
	
	S.display();
	
	-S;   //S.operator-()
	cout<< "S : ";
	
	
	S.display();



}






