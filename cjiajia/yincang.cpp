#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;


class Ponser{
	public:
		Ponser();
		void play();
	protected:
	  int age;	
};

Ponser::Ponser(){
	age = 11;
}
void Ponser::play(){
	cout << "ponser -- play()" << endl;
}


class Soldier:public Ponser
{
	public:
		Soldier();
		void play();
		void work();
	protected:
		string age;
};

Soldier::Soldier(){
	age = "1231";
	Ponser::age = 12;
}

void Soldier::play(){
	cout << "play -- soldier" << endl;
}

void Soldier::work()
{
	cout << age << endl;
	cout << Ponser::age << endl;
}



int main()
{
	
	Soldier s1;
	s1.play();
	
	s1.Ponser::play();
	s1.work();
	
	
   return 0;	
} 
