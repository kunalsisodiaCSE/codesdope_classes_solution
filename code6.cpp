#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
/*Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. 
First function named as 'setDim' takes the length and breadth of the rectangle as parameters and 
the second function named as 'getArea' returns the area of the rectangle. 
Length and breadth of the rectangle are entered through keyboard.*/
class Area{
    public:
    int length,breadth;
    void setDim(int a,int b){
       length=a;
       breadth=b;
    };
    void getArea(){
        cout<<"The Area of the Rectagle is : "<<(length*breadth);
    };
};
int main()
{
    int a,b;
     cout<<"Enter the dimensions of the rectangle :\n";
        cin>>a>>b;
    Area obj;
    obj.setDim(a,b);
    obj.getArea();
    return 0;
}