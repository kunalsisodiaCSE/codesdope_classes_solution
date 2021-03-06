#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
using namespace std;
/*Write a program that would print the information (name, year of joining, salary, address) of three employees by creating a class named 'Employee'. The output should be as follows:
Name        Year of joining        Address      
Robert        1994        64C- WallsStreat
Sam        2000        68D- WallsStreat
John        1999        26B- WallsStreat*/

class Employee
{
private:
    long salary;

public:
    string name;    
    int year;
    void input();
    void output();
    string address;
};
void Employee::input()          //function to take input
{
    // Employee obj;

    cout << "Enter the Name Of the Employee:\n";
    getline(cin, name);             //getline is used to take input including white spaces.
    cout << "Enter the Year of Joining Of the Employee:\n";
    cin >> year;
    cout << "Enter the Salary Of the Employee:\n";
    cin >> salary;
    cout << "Enter the Address Of the Employee:\n";
    cin.ignore();
    getline(cin, address);
}
void Employee::output()         //function to give output
{
    //  Employee obj1;
    cout << name << "\t\t" << year << "\t\t" << salary << "\t\t" << address << endl;    //output of employee
}

int main()
{
    Employee a, b, c;
    a.input();                                      //calling input function
    b.input();
    c.input();

    cout << "Name\t\t"<< "Year of Joining\t\t"<< "Salary\t\t"<< "Address\t\t\n";        //table index heading.
    a.output();                                     //calling output function.
    b.output();
    c.output();
    return 0;
}