#include <iostream>
#include <stdlib.h>
using namespace std;

class Coordinate{
	public:
		Coordinate(int x, int y);
	    int getX();
	    int getY(); 
	    
	    Coordinate &operator++();
	    
	    Coordinate operator++(int);
	    
	private:
	    int m_ix;
	    int m_iy;
};

Coordinate::Coordinate(int x, int y)
{
	m_ix = x;
	m_iy = y;
}

Coordinate &Coordinate::operator++(){
	m_ix++;
	m_iy++;
	return *this;
}

Coordinate Coordinate::operator++(int){
	Coordinate old(*this);
	this->m_ix++;
	this->m_iy++;
	return old;
}



int Coordinate::getX(){
	return m_ix;
}
int Coordinate::getY(){
	return m_iy;
}




int main()
{
  Coordinate t(1,3);
  cout << t.getX() << "," << t.getY() << endl;
  
  
  cout << (t++).getX() << ",";
   cout<< (t++).getY() << endl;
   
   cout << t.getX() << "," << t.getY() << endl;
    
   return 0;	
}
