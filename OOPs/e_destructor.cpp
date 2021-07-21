/*
Destructor is used to de-allocate the memory of object
SYNTAX: ~<class name>()
*/
#include<bits/stdc++.h>
using namespace std;

class student
{
public:
	int age;
	int roll_no;
	~student(){
		cout<<"Descturctor called\n";
	}
    student(){
    	cout<<"Constructor Called\n";
    }
	student(int age , int roll_no){
		
		this->age = age;
		this->roll_no = roll_no;
	}
public:
	
	int get_age(){
		return age;
	}
	void set_age(int a){
		age = a;
	}
	void display(){
		cout<<"age: "<<age<<"\n"<<"RollNo: "<<roll_no<<"\n";
	}
	
};

int main(){
	student s1(10,11);
	s1.display();
    student s2;
	s2.display();
	return 0;
}

/*
age: 10
RollNo: 11
Constructor Called
age: 1984589613
RollNo: 4200928
Descturctor called
Descturctor called

/* Desctructors are called at the end of program*/
*/
