#include<iostream>
#include<string>
using namespace std;
class Car{
    public:
    string car_model,car_yr,car_brand;
    void info(){
        cout<<"Enter the brand of the Car: "<<endl;
        cin>>car_brand;
        cout<<"Enter the year of manufacture of the Car: "<<endl;
        cin>>car_yr;
        cout<<"Enter the model of the Car: "<<endl;
        cin>>car_model;
    }
};
int main(){
Car c1;
c1.info();
cout<<"\n Brand: "<<c1.car_brand<<endl;
cout<<"\n Year of manufacture: "<<c1.car_yr<<endl;
cout<<"\n Model: "<<c1.car_model<<endl;
}

//Output:
//Enter the brand of the Car: 
//Mercedes
//Enter the year of manufacture of the Car: 
//24
//Enter the model of the Car: 
//E class

 //Brand: Mercedes

 //Year of manufacture: 24

 //Model: E
