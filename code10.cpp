#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
/*Write a program to print the volume of a box by creating a class named 'Volume' with an initialization list to initialize its length, breadth and height. (just to make you familiar with initialization lists)*/

class Volume{
public:
int length,breadth,height;
    Volume(int i = 0, int j = 0,int k=0):length(i), breadth(j),height(k) {}  
    //above statement is called initilisation list 
    void find(){
        cout<<"The Volume of the box is: "<<length*breadth*height;
    }
};

int main()
{   
    int x,y,z;          //local  variables to hold dimensions
    cout<<"Enter the dimensions of the box:\n";vs

    cin>>x>>y>>z;       //input dimensions
    Volume v(x,y,z);            //object creation of class Volume,and passing the dimensions of the box .
    v.find();                   //invoking  function find to calculate and print the volume of the box

    return 0;
}