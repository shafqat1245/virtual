#include<iostream>
using namespace std;
class shape//abstract class
{
protected:
	int length;
	int base;
	int hight;
	float a;
public:
	void setdata()
	{
		cout << "to calculate the area of square enter the length of one side of square" << endl;
		cin >> length;
	}
	void set_data()
	{
		cout << "to calculate the area of triangle enter the \nbase of triangle" << endl;
		cin >> base;
		cout << "the hight of triangle \n";
		cin >> hight;
	}
	virtual void calculatearea() = 0;

};
class square :public shape
{
public:
	void calculatearea()
	{
		cout << "the area of the square is " << length * length<<"m^2";
		cout<< "and the length of each side is" << length << endl;
    }
};
class triangle :public square
{
	public:
		void calculatearea()
		{
			a = 0.5* base * hight;
			cout << "the area of the triangle  is " << a <<"m^2"<<endl;
			cout<< "the base and hight of triangle is " << "base = "<<base<<" and "<<"hight = "<<hight<< endl;
		}
};
int main()
{
	shape* shape[2];
	square mysquare;
	triangle mytriangle;
	mysquare.setdata();
	mytriangle.set_data();
	shape[0] = &mysquare;
	shape[1] = &mytriangle;
	shape[0]->calculatearea();
	shape[1]->calculatearea();
	return 0;
}