#include<iostream>
using namespace std;
class base//the abstract class
{
protected:
	int n;
public:
	void setdata()
	{
		cout << "enter the number" << endl;
		cin >> n;
	}
	virtual void show() = 0;//pure virtual function
};
class derv1 :public base//uses the concept of inhritance to access the pure virtual function
{
public:
	void show()
	{
		cout << "the number is" << n << endl;
	}
};
class derv2 :public derv1// another derived class that shows the concept of reusibility of pure virtual functions
{
public:
	void show()
	{
		cout << "the number you entered is " << n << endl;
	}
};
int main()
{
	derv1 obj;
	obj.setdata();
	obj.show();
	derv2 o;
	o.setdata();
	o.show();
}