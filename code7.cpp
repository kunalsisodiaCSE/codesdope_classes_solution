#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
/*Write a program to print the area of a rectangle by creating a class named 'Area' 
taking the values of its length and breadth as parameters of its constructor and 
having a function named 'returnArea' which returns the area of the rectangle.
Length and breadth of the rectangle are entered through keyboard.*/
class Area{         //class declaration with name Area
public:             
int Length,Breadth;     //declaration of length and breadth.
Area(int a,int b){      //constructor with a,b as parameters for length and breadth.
    Length=a;
    Breadth=b;
}
void returnArea(){                          //function to return the calculated area of Rectangle
    cout<<"Area of the Rectangle is: "<<Length*Breadth;
};
};
int main()
{
    int l,b;                        //variables to take the input of dimensions 'length and Breadth'
    cout<<"Enter the Dimensions of the Rectangle:\n";
    cin>>l>>b;                      //input
    Area obj(l,b);                  //assigning values to onstructor and creation of object of class 'Area'.
    obj.returnArea();               //calling 'returnArea' function of 'Area' class
    return 0;
}