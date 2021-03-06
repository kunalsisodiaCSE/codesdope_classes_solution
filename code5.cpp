#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
/*Write a program to print the area of two rectangles having sides (4,5) and (5,8) 
respectively by creating a class named 'Rectangle' with a function named 'Area' which 
returns the area. Length and breadth are passed as parameters to its constructor.*/
class Rectangle
{
public:
    int a, b;
    Rectangle(int aa, int bb)   //parameterized constructor
    {
        a = aa;
        b = bb;
    }
    void area()
    {
        cout << "Area of the Rectangle is : " << (a * b) << endl;
    }
};

int main()
{
    Rectangle obj1(4, 5);       //initialising function with values 4,5
    Rectangle obj2(5, 8);       //initialising function with values 5,8
    obj1.area();
    obj2.area();
    return 0;
}