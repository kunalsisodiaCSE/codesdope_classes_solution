#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
/*Question: Add two distances in inch-feet by creating a class named 'AddDistance'.*/
class AddDistance{
public:
    float inch,feet;        //dimensions in feet
    void input(){           //function to take input
        cout<<"Enter the distance in inches:\n";
        cin>>inch;
        cout<<"Enter the distance in feet:\n";
        cin>>feet;
    }
    void addition(){        //function to add distances.
    cout<<"Sum of Dimensions in Inches = "<<(inch+(feet*12))<<endl;
    cout<<"Sum of Dimensions in Feets = "<<(feet+(inch/12))<<endl;
    }
};

int main()
{
    AddDistance obj;
    obj.input();        //calling input function
    obj.addition();     //calling addition function
    return 0;
}