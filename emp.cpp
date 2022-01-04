#include<iostream>
#include<string>
using namespace std;
class Employee
{
protected:
    string empno; 
    string name;
    string designation;
public:
    void input()
    {
        cout<<"Enter Employee No: ";
        getline(cin,empno);
        cout<<"Enter Employee Name: ";
        getline(cin,name);
        cout<<"Enter Employee Designation: ";
        getline(cin,designation);
    }
};
class Qualification :public Employee{
protected:
    int UG;
    int PG;
    int experience;
public:
    void input()
    {
        Employee::input();
        cout<<"Enter Employee UG: ";
        cin>>UG;
        cout<<"Enter Employee PG: ";
        cin>>PG;
        cout<<"Enter Employee Experience: ";
        cin>>experience;
    }
};
class Salary:public Qualification{
private:
    int increments;
    int basic,da,hra,gross;
public:
    void input()
    {
        Qualification::input();


        cout<<" Enter basic";
        cin>>basic;

        da=0.9*basic;
        hra=0.4*basic;
        gross=basic+da+hra;

        if(UG==1 && PG==1 && experience>5)
        {
          increments=0.5*basic;
        }

        else if(UG==1 && PG==1 && experience<5 && experience >2)
        {
            increments=0.25*basic;
        }

        else
        {
            increments=0.10*basic;
        }

    }
    void display(){

        cout<<"No: "<<empno<<"\n";
        cout<<"Name: "<<name<<"\n";
        cout<<"Designation: "<<designation<<"\n";
        cout<<"UG: "<<UG<<"\n";
        cout<<"PG: "<<PG<<"\n";
        cout<<"Experience: "<<experience<<"\n";
        cout<<"Current Gross Salary: "<<basic <<"\n";
        cout<<"Incremented Current Gross Salary: "<<(basic+increments) <<"\n";

    }
};




int main () {
    Salary salaryEmployee;
    salaryEmployee.input();
    salaryEmployee.display();
    system("pause");
    return 0;
}