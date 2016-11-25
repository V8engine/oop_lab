#include<iostream>
using namespace std;


class complex
{
	float real;
	float imag;
	
	public:
		
			complex(){}
			complex(float x, float y)
			{
					real = x;
					imag = y;
			
			}
			
			friend complex operator+(complex,complex);

			void display(void)
			{
					cout<<this->real << "+" << "i"<<this->imag;
			
			
			}

};

complex operator+(complex c1, complex c2)
{
		complex temp;
		
		temp.real = c1.real + c2.real;
		temp.imag = c1.imag + c2.imag; 

		return temp;


}


int main()
{
		complex c1(6,5);
		complex c2(6.5,7.7);
		
		complex c3 = c1 + c2;


		c3.display();






return 0;
}



