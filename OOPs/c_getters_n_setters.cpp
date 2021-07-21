/*
Access Specifiers ->Public    ->can be accessed anywhere inside and outside the class
                  ->Private   ->can be accessd only inside the class
                  ->Protected
Getters and setters are used to get and set the values of private variables outside the class

What its the point if we are anyway accessing the private variable??
->the thing we saw is just an example 
we can keep it private by inputing password
only the people given correct password can access the variable
Ex:
int get_age(int password){
    if(password != xyz){
    return "-1";
    }
		return age;
	}
*/

#include<bits/stdc++.h>
using namespace std;

class student
{
private:
	int age;
public:
	int roll_no;
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
	student s1;
	s1.set_age(10);
	s1.roll_no = 3;
	s1.display();
	cout<<"Age: "<<s1.get_age()<<"\n";
	
	return 0;
}

