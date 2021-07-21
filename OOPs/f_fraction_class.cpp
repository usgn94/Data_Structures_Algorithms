#include<bits/stdc++.h>
using namespace std;

class Fraction
{
private:
    int numerator,denominator;
public:
    Fraction(int numerator, int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void display(){
        cout<<this->numerator<<"/"<<this->denominator<<"\n";
    }
    void add(Fraction f2){
        int lcm = (this->denominator)*(f2.denominator);
        int x = lcm/denominator;
        int y = lcm/f2.denominator;
        numerator = x*(this->numerator) + y*(f2.denominator);
        denominator =lcm;
    }
    
};

int main(){
    Fraction f1(15,4);
    Fraction f2(16,7);
    f1.add(f2);
    f1.display();
    return 0;
}
