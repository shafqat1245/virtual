#include<iostream>
using namespace std;
class fruit
{
public:
	virtual void propreties() = 0;
};
class apple :public fruit
{
public:
	void propreties()
	{
		cout <<"the properties of apples are" << endl;
		cout << "the apples mostly found in red colour" << endl;
		cout << "it is a bit hearder to eat and found in round shape" << endl;
		cout << "its taste is sweet and delecious to eat" << endl;
	}
};
class banana:public apple
{
public:
	void propreties()
	{
		cout << "the properties of bananas are" << endl;
		cout << "the bananas mostly found in yellow colour" << endl;
		cout << "it is very soft to eat " << endl;
		cout << "its taste is sweet and delecious to eat" << endl;

	}
};
int main()
{
	apple obj;
	banana ob;
	obj.propreties();
	ob.propreties();
	return 0;
}