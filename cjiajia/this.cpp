# include <stdlib.h>
# include <iostream>
using namespace std;

class Array{
	public:
		Array(int len);
		void setlen(int len);
		int getlen();
		Array& printinfo();
		~Array();
    private:
	  int len;		
};

Array::Array(int len)
{
	this->len = len;
}

void Array::setlen(int len)
{
	this->len = len;
}

int Array::getlen()
{
	
	return this->len;
}

Array& Array::printinfo(){
	cout << "len :" << this->len << endl;
	return *this;
} 

Array::~Array(){
	cout << "~Array()" << endl;
}





int main()
{
	Array arr1(10);
	arr1.printinfo().setlen(5);
	
	arr1.printinfo();
	
   return 0;	
} 
