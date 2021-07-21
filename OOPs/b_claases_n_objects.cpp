/*
  Object -> Basic simple entity which posses properties and functions
  Class  -> A template for set of similar objects
*/
#include<bits/stdc++.h>
using namespace std;

class student
{
public:
	int age;
	int roll_no;
	void display(){
		cout<<"age: "<<age<<"\n"<<"RollNo: "<<roll_no<<"\n";
	}
	
};

int main(){
	student s1;
	s1.age = 10;
	s1.roll_no = 3;
	s1.display();
	student s2;
	s2.display()
	return 0;
}
