#include<iostream>
using namespace std;
class shape//intreface
{public:
	virtual void draw() = 0;//pure virtual functions
};
//uses the concept of inheritance to show the reusability 
class circle :public shape
{
public:
	void draw()
	{
		cout << " the circle ....." << endl;
	}
};
class rectangle :public circle
{
public:
	void draw()//use the same function draw for two different classes
	{
		cout << "the rectangle....." << endl;
	}
};
int main()
{
	shape* shape[2];// the array of shape pointers
	circle c;
	rectangle r;
	shape[0] = &c;
	shape[1] = &r;
	shape[0]->draw();
	shape[1]->draw();
}