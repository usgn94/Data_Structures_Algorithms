/*
copy assignment operator
*/

#include<bits/stdc++.h>
using namespace std;

class student
{
public:
	int age;
	int roll_no;
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
	cout<<"S1\n";
	s1.display();
	cout<<"S2 Before Copy assignment\n";
	student s2(20,22);
	s2.display();
	cout<<"S2 After Copy assignment\n";
	s2 = s1;
	s2.display();
	
	return 0;
}

/*
Output:

S1
age: 10
RollNo: 11
S2 Before Copy assignment
age: 20
RollNo: 22
S2 After Copy assignment
age: 10
RollNo: 11

*/
