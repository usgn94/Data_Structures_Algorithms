/*
Constructor -> initialize the default value to all data members
  |
  -Default Constructor -> Same name as that of class
                       -> no return type
                       Ex: student(){
                            }
                       -> Automatically called when object is declared
                       ->inbuilt
  ->Parmeterized Constructor ->
  ->this
*/
#include<bits/stdc++.h>
using namespace std;
/*************************************************************************************************/
class student
{
private:
	int age;
public:
	student(){
		cout<<"Constructor Called";
	}
};

int main(){
	student s1;
	
	return 0;
}
//output: Constructor Called
/*************************************************************************************************/
class student
{
private:
	int age;
  student(){
		cout<<"Constructor Called";
	}
public:
};
int main(){
	student s1;
	
	return 0;
}
//Error: 'student::student()' is private within this context
/*************************************************************************************************/
class student
{
public:
	int age;
  int roll_no;
  student(){
  cout<
  }
  student(int a){
    age = a;
  }
  student(int a , int r){
    age = a;
    roll_no = r;
		cout<<"Constructor Called";
	}
public:
};
int main(){
	student s1(10,2);
	
	return 0;
}
/*************************************************************************************************/
#include<bits/stdc++.h>
using namespace std;

class student
{
public:
	int age;
  int roll_no;
	student(int age , int roll_no){
		cout<<"Constructor Called\n";
		age = age;
		roll_no = roll_no;
	}
  void display(){
		cout<<"age: "<<age<<"\n"<<"RollNo: "<<roll_no<<"\n";
	}
};

int main(){
	student s1(10,11);
	s1.display();
	
	return 0;
}
/*Output:
Constructor Called
age: 6422400
RollNo: 4200960
Here age and roll_no are garbage values
*/
/*************************************************************************************************/
#include<bits/stdc++.h>
using namespace std;

class student
{
public:
	int age;
  int roll_no;
	student(int age , int roll_no){
		cout<<"Constructor Called\n";
		this->age = age;
		this->roll_no = roll_no;
	}
  void display(){
		cout<<"age: "<<age<<"\n"<<"RollNo: "<<roll_no<<"\n";
	}
};

int main(){
	student s1(10,11);
	s1.display();
	
	return 0;
}
//thi keyword holds the address of current object
/* Output:
Constructor Called
age: 10
RollNo: 11
*/
