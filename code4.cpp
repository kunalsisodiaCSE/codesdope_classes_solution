#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;
/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units 
by creating a class named 'Triangle' with the constructor having the three sides as its parameters.*/
class Triangle
{
public:
    int a, b, c;
    Triangle(int aa, int bb, int cc)            //parameterized constructor
    {
        a = aa;
        b = bb;
        c = cc;
    }
    void area();            
    void perimeter();
};

void Triangle::area()           //definition of area function
{
    int s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Area Of the Triangle is: " << area << endl;
}

void Triangle::perimeter()      //definition of perimeter function
{
    cout << "Perimeter of the Triangle is: " << (a + b + c) << endl;
}

int main()
{
    Triangle obj(3, 4, 5);      //initialising parameterized constructor with values 3,4,5
    obj.area();                 //calling area function
    obj.perimeter();            //calling perimeter function
    return 0;
}