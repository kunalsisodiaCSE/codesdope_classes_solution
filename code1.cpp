#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
/*Question: Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'.
 Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.*/

class Student{
   public:
    string name;           
    int roll_no;

};
int main()
{
        Student obj;
    obj.name="John";        //accessing name data member of class Student.
    obj.roll_no=12014321;   //accessing rol_no data member of class Student.
    cout<<"Name = "<<obj.name<<"\nRoll No = "<<obj.roll_no;
    return 0;
}