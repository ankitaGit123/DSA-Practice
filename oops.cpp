#include<bits/stdc++.h>
using namespace std;

class Teacher {
private:
    double salary;
    //properties /atributes
public:
    string name;
    string dept;
    string subject;
    //method/ member functions

    void changeDept(string newDept){
        dept = newDept;
    }
    //setter == set the private value
    void setSalary(double s){
        salary = s;
    }
    //getter == get the private value
    double getSalary(){
        return salary;
    }
};

int main(){
    Teacher t1;
    t1.name = "Ankita";
    t1.subject = "C++";
    t1.dept = "Civil Eng";
    t1.setSalary(25000000);

    cout<< t1.name <<endl;
    cout<< t1.getSalary() <<endl;

    return 0;
}