#include<iostream.h>

using namespace std;

class student
{
protected:
	int roll_number;
public:
	void get_number(int a)
	{
		roll_number = a;		
	
	}
	
	void put_number(void)
	{
		cout<< " Roll No: "<< roll_number <<"\n";
	}

};

class test : virtual public student
{
	protected:
	float part1, part2;
	void get_marks(float x,float y)
	{
			part1 = x;
			part2 = y;	
	
	
	}
	void put_marks(void)
	{
		cout<<"Marks obtained:  "<<"\n";
		cout<<"Part1 = "<<"\n";
		cout<<"Part2 = "<<"\n";
		
	
	}



};

class sports : public virtual student
{
protected:
float score;
public:
	void get_score(float s)
	{
		score = s;
	
	}
	
	void put_score(void)
	{
			cout<<"Sports wt:"<<score <<"\n\n";
	
	}



};
class result : public test, public sports
{
	float toatal;
	
public:

	void display(void)
	




};

void result :: dispaly(void)
{

		total = part1 + part2;

		put_number();
		put_marks();
		put_score();

		cout<< " Toatal score = "<<total<<"\n";

}

int main()
{
	result student1;
	
	student1.get_number(678);
	student1.get_marks(30.5, 25.5);
	student1.get_score(7.0);
	student1.display();
		
	return 0;
	


}
















