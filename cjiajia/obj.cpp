#include <stdlib.h>
#include <iostream>
using namespace std;

class Coordinate{
	public:
		Coordinate(int _a,int _b);
		
		int geta();
		void seta(int _a);
		int getb();
		void setb(int _b);
		~Coordinate();
    private:
	   int m_inta;
	   int m_intb; 		
};

Coordinate::Coordinate(int _a,int _b){
	m_inta = _a;
	m_intb = _b;
	cout << "Coordinate" << m_inta << "," << m_intb<<endl;
} 

int Coordinate::geta()
{
	return m_inta;
}

void Coordinate::seta(int _a)
{
	m_inta = _a;
}

int Coordinate::getb(){
	return m_intb;
}

void Coordinate::setb(int _b){
	m_intb = _b;
}

Coordinate::~Coordinate(){
	cout << "~Coordinate" << m_inta << "," << m_intb <<endl;
}


class Line{
	public:
	   Line(int x1,int y1,int x2,int y2);
	   
	   void setA(int x,int y);
	   
	   void setB(int x,int y);
	   
	   void printInfo();
	   
	   ~Line();
	   
	   Coordinate m_coorA;
	   Coordinate m_coorB;
	
};

Line::Line(int x1,int y1,int x2,int y2):m_coorA(x1,y1),m_coorB(x2,y2)
{
	cout << "Line()" << endl;
	cout << "m_coorA" << x1 << "," << y1 <<endl;
	cout << "m_coorB" << x2 << "," << y2 <<endl;
}

void Line::setA(int x,int y)
{
	m_coorA.seta(x);
	m_coorA.setb(y);
}

void Line::setB(int x,int y)
{
    m_coorB.seta(x);
	m_coorB.setb(y);	
}

void Line::printInfo(){
	
	cout << "(" << m_coorA.geta() << "," << m_coorB.getb() << ")" << endl;
	 
	cout << "(" << m_coorB.geta() << "," << m_coorB.getb() << ")" << endl;
}

Line::~Line(){
	cout << "~line()" <<endl;
}




int main()
{
	Line *p = new Line(1,2,3,4);
	
	delete p;
	p = NULL;
	
   return 0;	
} 
