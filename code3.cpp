#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units 
by creating a class named 'Triangle' with a function to print the area and perimeter.*/
class Triangle
{
public:
    int side1, side2, side3;
    void area(int a, int b, int c);
    void perimeter(int a, int b, int c);
};

void Triangle::area(int a, int b, int c)            //definition of function area
{
    int s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Area Of the Triangle is: " << area << endl;
}

void Triangle::perimeter(int a, int b, int c)           //definition of function perimeter
{
    cout << "Perimeter of the Triangle is: " << (a + b + c) << endl;
}

int main()
{
    Triangle obj;           //creating object of class Triangle
    obj.area(3, 4, 5);          //calling area function
    obj.perimeter(3, 4, 5);
    return 0;
}