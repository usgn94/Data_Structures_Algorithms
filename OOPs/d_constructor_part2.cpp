/*
-Copy Constructor ->creates and object which is copy of another constructor
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
	s1.display();
	student s2(s1);
	s2.display();
	
	return 0;
}

/*
Output:
age: 10
RollNo: 11
age: 10
RollNo: 11
*/
