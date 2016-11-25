#include<iostream>
using namespace std;


class String
{
	char a[100];
	
	public:
	
	
	void getstring(char* y)
	{
		int i;
		for(i = 0; y[i]!='\0';i++)
		{
				a[i]=y[i];
		}
			a[i] = '\0';
	
	}
	
	void putstring()
	{
		int i;
		
		
		
		for(i = 0; a[i]!='\0'; i++)
		{
				cout<< a[i];	
		
		}
			
	}
	
	int str_length()
	{
		int i;
		int len = 0;
		
		
		for(i = 0; a[i]!= '\0'; i++)
		{
			++len;
		}
			
			
		return len;	
	
	}
	int str_cmp(String s)
	{
			int flag = 0;
			for(int i = 0; s.a[i]!='\0';i++)
			{
					if(this->a[i] != s.a[i])
					{
							flag = 1;
							break;
					} 
			
			}
			
			return flag;
	
	}



};

int main()
{
		int k, i;
		int flag;
		char string[100];
		cout<<"Enter the string";
		cin>>string;
		char string1[100];
		cout<<"Enter the string";
		cin>>string1;
		String str1;
		String str2;
		
		str1.getstring(string);
		str2.getstring(string1);
		cout<<"\n";
		str1.putstring();
		cout<<"\n";
		k = str1.str_length();
		cout<<"The length is : "<<"\n"<<k;
		flag = str1.str_cmp(str2);
		cout<<"\n";
		cout<<flag;
		


		cout<<"\n";



return 0;

}






