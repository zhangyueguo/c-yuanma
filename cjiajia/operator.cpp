#include <iostream>
#include <stdlib.h>
using namespace std;

class Coordinate{
	//友元函数的重载 
	friend Coordinate &operator-(Coordinate &c); 
	
	public:
		Coordinate(int a,int b);
	  //  Coordinate &operator-();
	    int getX();
	    int getY();
	
	private:
		int x;
		int y;
};


Coordinate::Coordinate(int a,int b)
{
	x=a;
	y=b;
}

int Coordinate::getX(){
	return x;
}

int Coordinate::getY(){
	return y;
}

//Coordinate &Coordinate::operator-(){
//	this->x = -(this->x);
//	this->y = -(this->y);
//  return *this;   
//}

Coordinate &operator-(Coordinate &c)
{
	c.x = -c.x;
	c.y = -c.y;
	return c;
}


int main()
{
	
	Coordinate t(1,3);
	cout << t.getX() << "," << t.getY() << endl;
	-t;
	cout << t.getX() << "," << t.getY() << endl;
	
     return 0;	
} 
