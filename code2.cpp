#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
/*Assign and print the roll number, phone number and address of two students having names "Sam" and "John" 
respectively by creating two objects of the class 'Student'.*/
class Student{
public:
int roll_number,phone;
string address;
void getdata(string name);              //function to print data
void setdata(string name);              //function to take input data
};

void Student:: setdata(string name){        //definiton of function setdata
    cout<<"Enter the Roll Number of "<<name<<": ";
    cin>>roll_number;
    cout<<"Enter the Phone Number of "<<name<<": ";
    cin>>phone;
    cout<<"Enter the Address of "<<name<<": ";
    cin>>address;
    cout<<endl;
}
void Student :: getdata(string name){           //definiton of function getdata
    cout<<"The Roll Number of "<<name<<" is "<<roll_number<<endl;
    cout<<"The Phone Number of "<<name<<" is "<<phone<<endl;
    cout<<"The Address of "<<name<<" is "<<address<<endl;
}
int main()
{
 Student sam,john;          //creating two objects of class Student as sam and john.
    sam.setdata("Sam");     //calling setdata function
    john.setdata("John");
    sam.getdata("Sam");
    john.getdata("John");
    return 0;
}