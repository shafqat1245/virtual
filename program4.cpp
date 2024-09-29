#include<iostream>
using namespace std;
class employee
{
public:
	virtual void calculate_salary() = 0;
};
class FullTimeEmployee :public employee
{
public:
	void calculate_salary()
	{
		cout << "the salary of FTE is 80,000" << endl;
	}
};
class PartTimeEmployee :public FullTimeEmployee
{
public:
	void calculate_salary()
	{
		cout << "the salary of PTE is 90,000" << endl;
	}
};
int main()
{
	PartTimeEmployee obj;
	FullTimeEmployee ob;
	ob.calculate_salary();
	obj.calculate_salary();
		return 0;
}