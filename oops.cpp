#include<iostream>
using namespace std;

class Teacher {
private : 
    double salary;

public : 
    string name;
    int age;
    string subject;

    void setSalary(double s){
        salary = s;
    }

    double getSalary(){
        return salary;
    }
};

 int main(){
    Teacher t1;
    t1.name = "Rishi shrivastava";
    t1.age = 24;
    t1.subject = "Maths";   
    t1.setSalary(50000);
    cout<<"Name: "<<t1.name<<endl;
    cout<<"Age: "<<t1.age<<endl;
    cout<<"Subject: "<<t1.subject<<endl;  
    cout<<"Salary: "<<t1.getSalary()<<endl;  
    return 0;
}