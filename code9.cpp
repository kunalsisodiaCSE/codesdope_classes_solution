#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
/*Print the sum, difference and product of two complex numbers by creating a class named 'Complex' 
with separate functions for each operation whose real and imaginary parts are entered by the user.*/
class Complex
{
public:
    int real, img;
    Complex()
    {
        real = 0;
        img = 0;
    }

    static void sum(Complex obj1, Complex obj2);              //static function with class object for accessing values of constructor.
    static void difference(Complex obj1, Complex obj2);         
    static void product(Complex obj1, Complex obj2);
    void get();
};

void Complex::get()             //function to get the data(Take input of complex numbers)
{
    cout << "Enter Real Part:\n";
    cin >> real;
    cout << "Enter Imaginary Part:\n";
    cin >> img;
}

void Complex ::sum(Complex obj1, Complex obj2)      //function to add two complex numbers
{
    int real = obj1.real + obj2.real;
    int img = obj1.img + obj2.img;
    cout << "Sum of Complex Numbers is: " << real << " + " << img << "i" << endl;
}
void Complex ::difference(Complex obj1, Complex obj2)       //function to find difference of two complex numbers
{
    int real = obj1.real - obj2.real;
    int img = obj1.img - obj2.img;
    cout << "Difference of Complex Numbers is: " << real <<((img>=0)?" + ":" ")<< img << "i" << endl;
}

void Complex ::product(Complex obj1, Complex obj2)      //function to find the product of two complex nummbers
{
int real= obj1.real*obj2.real - obj1.img*obj2.img;
int img = obj1.real*obj2.img + obj1.img*obj2.real;
    cout << "Product of Complex Numbers is: " << real <<((img>=0)?" + ":" ")<< img << "i" << endl;

}

int main()
{
    Complex a, b;                   //declaring two objects to take input of complex numbers.
    cout << "Enter the First Complex Number:\n";
    a.get();
    cout << "Enter the Second Complex Number:\n";
    b.get();
    Complex::sum(a, b);             //calling sum function
    Complex::difference(a, b);      //calling difference function
    Complex:: product(a,b);         //calling product function
    return 0;
}