#include <iostream>
#include <stdlib.h>

using namespace std;


class Exception{
	public:
	virtual void printInfo();
};

class IndexException : public Exception
{
	public:
	virtual void printInfo();
};

void Exception::printInfo()
{
	cout << "Exception---printInfo" << endl;
}

void IndexException::printInfo()
{
	cout << "数组下表越界了" << endl; 
}


void text()
{
   	throw IndexException();
}




int main()
{
	try{
		text();
	}catch(IndexException &e){
		e.printInfo();
	}
		
   return 0;	
} 
