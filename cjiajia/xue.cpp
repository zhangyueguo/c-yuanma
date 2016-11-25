#include <stdlib.h>
#include <iostream>
#include <string>
#include "Teacher.cpp"

using namespace std;


class Teacher{
	public:
	    //声明构造函数
		Teacher();		
		string getname();
		void setname(string _name);
    private:
	   string name;		
};

 Teacher::Teacher(){
 	cout << "wo shi goucao hanshu" << endl;
 }

string Teacher::getname(){
	return name;
}

void Teacher::setname(string _name)
{
	name = _name;
	cout << "name is :" << name <<endl;
}


int main()
{
   	Teacher t;
   	t.setname("zhang");
   	
   	cout << "dianyong hanshu" << t.getname()<< endl;
   	
  return 0;	
} 
