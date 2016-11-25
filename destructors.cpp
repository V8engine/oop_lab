#include<iostream>
using namespace std;

int count = 0;

class alpha
{
	public:
		alpha()
		{
			count++;
			cout<<"\n No. of object created"<< count;	
		}

		~alpha()
		{
			cout << " No. of object destroyed"<< count;
			count-- ;

		}

};

int main()
{
	cout<<"\nEnter main";

	alpha A1,A2,A3,A4;


return 0;
};
