#include <iostream>

#include <stdlib.h>

using namespace std;

class Math;

class Time{
	friend class Math;
	public:
		Time():h(0),m(0),s(0)
		{
		}
	private:
	    void printinfo(){
		   cout << h << ":" << m << ":" << s <<endl;	
		}
	  int h;
	  int m;
	  int s;	
};

class Math{
	public:
	Math(int a,int b,int c){
		T.h = a;
		T.m = b;
		T.s = c;
	}
	void pr()
	{
		T.printinfo();
	}
	
   private:
       Time T;	
};



int main()
{
	
	Math t(5,38,40);
	
	t.pr();
	
	
   return 0;	
} 
