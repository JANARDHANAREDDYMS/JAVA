#include<iostream>
using namespace std;

class empdata
{
    private:
        int empno;
        string empname;
        int salary;
        int allowance;

    public:
       void getdata()
       {
         cout<<"Enter the employee no";
         cin>>empno;
         cout<<"Enter the name";
         cin>>empname;
         cout<<"Enter the basic salary";
         cin>>salary;
         cout<<"Enter the alowance issued";
         cin>>allowance;

       }

       void dispdata()
       {
        cout<<"The no of the employee is"<<empno;
        cout<<"The name of the employee is"<<empname;
        cout<<"The basic salry is"<<salary;
        cout<<"The allowance issued is"<<allowance;
       }
};

int main()
{
    empdata c1;
    c1.getdata();
    c1.dispdata();
}