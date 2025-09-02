#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name,branch,subject,year;
    float result;
};
int main(){
Student s1;
    s1.name = "Varun parandkar";
    s1.branch = "ENTC";    
    s1.subject = "C++";
    s1.year = "2nd Year";
    s1.result = 6.78;    
    cout << "Name: " << s1.name << endl;
    cout << "Branch: " << s1.branch << endl;    
    cout << "Subject: " << s1.subject << endl;
    cout << "Year: " << s1.year << endl;
    cout << "Result: " << s1.result << endl;
     s1.name = "Yadnesh Nikam";
    s1.branch = "ENTC";    
    s1.subject = "C++";
    s1.year = "2nd Year";
    s1.result = 7.2;    
    cout << "Name: " << s1.name << endl;
    cout << "Branch: " << s1.branch << endl;    
    cout << "Subject: " << s1.subject << endl;
    cout << "Year: " << s1.year << endl;
    cout << "Result: " << s1.result << endl;

}

//Output:
//Name: Varun parandkar
//Branch: ENTC
//Subject: C++
//Year: 2nd Year
//Result: 6.78
//Name: Yadnesh Nikam
//Branch: ENTC
//Subject: C++
//Year: 2nd Year
//Result: 7.2
