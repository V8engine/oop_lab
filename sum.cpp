#include<iostream>
using namespace std;
class sum
{
		int num_1;
		int num_2;
		float num_3;
		float num_4;
		
		
	public:	
		sum()
		{
		
		}
		void sum1(int num1, int num2)
		{
				int sum3;
				num_1 = num1;
				num_2 = num2;
				sum3 = num_1 + num_2;
				cout<<"sum of int is:"<<sum3;		
		} 
		void sum1(float num3,float num4)
		{
				float sum2;
				num_4 = num4;
				num_3 = num3;
				sum2 = num_4 + num_3;
				cout<<"sum of float is:"<<sum2;
						
		} 

	

};

int main()
{
	float i=5.6,j=6.5;
	
	sum s1,s2;
	
	s1.sum1(5,6);
	
	
	s2.sum1(i,j);
	
	
}






