#include<iostream>
#include<string>
using namespace std;
class Calculator{
    public:
    float a,b,add,diff,mul,div;
    void mult();
    void div1();
    void input();
    void addition(){
        add=a+b;
    }
    void subtraction(){
        diff=a-b;
    }
};
void Calculator::input(){
        cout<<"Enter The first number: "<<endl;
        cin>>a;
        cout<<"Enter The second number: "<<endl;
        cin>>b;}
void Calculator::mult(){
      mul=a*b;
    }
void Calculator::div1(){
      div=a/b;
    }    
    
int main(){
Calculator c1;
c1.input();
c1.mult();
c1.div1();
c1.addition();
c1.subtraction();
cout<<"Addition: "<<c1.add<<endl;
cout<<"Subtraction: "<<c1.diff<<endl;
cout<<"Multipilcation: "<<c1.mul<<endl;
cout<<"Divition: "<<c1.div<<endl;
}

//Output:
//Enter The first number: 
//25
//Enter The second number: 
//27
//Addition: 52
//Subtraction: -2
//Multipilcation: 675
//Divition: 0.925926
