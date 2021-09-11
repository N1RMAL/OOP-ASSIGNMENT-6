#include <iostream>
#include <string.h>
using namespace std;

int salary;

class Employee
{
    private:
    
    string name, department;
    int id;
    
    public:
    
    void input()
    {
        cout << "Enter the name of the employee:\n";
        getline(cin, name);
        
        cout << "Enter the ID number of the employee:\n";
        cin >> id;
        
        cout << "Enter the department of the employee:\n";
        cin.ignore();
        getline(cin, department);
        
        cout << "Enter the basic salary of the employee:\n";
        cin >> salary;
    }
    
    void display()
    {
        cout << "\nEmployee Details:\n\n";
        cout << "Name: " << name;
        cout << "\nID: " << id;
        cout << "\nDepartment: " << department;
        cout << "\nSalary: " << salary;
    }
};

class Sales
{
    private:
    
    double sales, inc;
    
    public:
    
    void input2()
    {
        cout << "\n\nEnter total sales by employee:\n";
        cin >> sales;
    }
    
    void compute()
    {
        if(sales>=50 && sales<100)
        {
            inc=(0.1*salary);
        }
        
        else if(sales>=100 && sales<150)
        {
            inc=(0.2*salary);
        }
        else if(sales>=150)
        {
            inc=(0.3*salary);
        }
        else
        {
            cout << "No incentives available, input again!";
            exit(0);
        }
    }
    
    void display2()
    {
        cout << "\nSales: " << sales << endl;
        cout << "Total Incentives: " << inc << endl;
    }
    friend class fri;
};

class fri
{
    string ind;
    
    public:
    
    void indic(Sales ob)
    {
        if(ob.sales>150)
        {
            ind="Excellent";
        }
        else if(ob.sales>100 && ob.sales<=150)
        {
            ind="Good";
        }
        else if(ob.sales>=50 && ob.sales<=100)
        {
            ind="Satisfactory";
        }
        else
        {
            ind="Poor";
        }
    }
    
    void display3()
    {
        cout << "Performance Indicator: " << ind;
    }
};

int main()
{
    Employee obj1;
    Sales obj2;
    fri obj3;
    obj1.input();
    obj1.display();
    obj2.input2();
    obj2.compute();
    obj2.display2();
    obj3.indic(obj2);
    obj3.display3();
}