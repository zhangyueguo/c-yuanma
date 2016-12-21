#include <iostream>
using namespace std;


class Coordinate{
      public:
      	Coordinate(int a, int b);
      	int getX();
      	int getY();
      	
      	Coordinate operator+(Coordinate &c);
      	
      private:
	    int m_ix;
		int m_iy;	
};

Coordinate::Coordinate(int a, int b)
{
	m_ix = a;
	m_iy = b;
}

int Coordinate::getX(){
	return m_ix;
}
int Coordinate::getY(){
	return m_iy;
}
Coordinate Coordinate::operator+(Coordinate &c)
{
	Coordinate temp(0,0);
	temp.m_ix = this->m_ix + c.m_ix;
	temp.m_iy = this->m_iy + c.m_iy;
	return temp;
}


int main()
{
	Coordinate coor1(1,4);
	Coordinate coor2(2,5);
	Coordinate coor3(0,0);
	coor3 = coor1 + coor2;
	cout << coor3.getX() << "," << coor3.getY() <<endl;
	return 0;
}
