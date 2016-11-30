#include <stdlib.h>
#include <iostream>

using namespace std;

class Array{
	public:
	   Array(int _x);
	   Array(const Array &arr);		
	   ~Array();
	   void setiCount(int _a);
	   int getiCount();	
	   void printinfo();
	   
    private:
	   int m_iCount;
	   
	   int *p_arr;		
};

Array::Array(int _x)
{
	m_iCount = _x;
	p_arr = new int[m_iCount];
	cout << "Array()" <<endl;
}

Array::Array(const Array &arr)
{
	//m_iCount = arr.getiCount();      用这个方法 为什么 编译不能通过 
	
//	 p_arr = arr.p_arr;            //前拷贝 
//    m_iCount = arr.m_iCount;
    
    //深拷贝
	m_iCount = arr.m_iCount;
	
	p_arr = new int[m_iCount];
	
	for(int i=0;i<m_iCount;i++)
	{
	   	p_arr[i] = arr.p_arr[i]; 
	} 
    
    
    
	cout << "Array &" << endl;
}

Array::~Array(){
	
	delete []p_arr;
	p_arr = NULL;
	cout << "~Array" << endl;
}

void Array::setiCount(int _a)
{
	m_iCount = _a; 
}

int Array::getiCount()
{
	return m_iCount;
}

void Array::printinfo(){
	cout << "p_arr" << " " << p_arr << endl;
}



int main()
{
  Array arr1(5);
  //arr1.setiCount(5);
  
  //cout << arr1.getiCount() << endl;
  
  Array arr2(arr1);
  
  arr1.printinfo();
  arr2.printinfo();
  
  //cout << arr2.getiCount() << endl; 
  system("pause");	
  return 0;	
} 
