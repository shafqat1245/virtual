#include<iostream>
using namespace std;
class vehical// intrface
{ 
public:
	virtual void get_number_of_wheels() = 0;//pure virtual functions

};
class car:public vehical//derived class for car
{
public:
	void get_number_of_wheels()
	{
		cout << "the number of wheels of the car are 4" << endl;
	}
};
class bike :public car//derived class for bike
{
public:
	void get_number_of_wheels()
	{
		cout << "the number of wheels of the bike are 2" << endl;
	}
};
int main()
{
	vehical* vehical[2];//array of pointres to  vehical
	//creating objects of car and bike
	car obj;
	bike o;
	//storing the address of object in the array
	vehical[0] = &obj;
	vehical[1] = &o;
	vehical[0]->get_number_of_wheels();
	vehical[1]->get_number_of_wheels();
	return 0;
}