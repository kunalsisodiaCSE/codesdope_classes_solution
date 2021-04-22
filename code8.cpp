#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
/*Print the average of three numbers entered by the user by creating a class named 'Average' having 
a function to calculate and print the average without creating any object of the Average class.*/
int a, b, c; //declaring global variable to be accessed anywhere in the code
class Average
{
public:
    static void averageFunct()
    { //declaring static function so that no object is needed for calling
        cout << "Average of Three Numbers is:\t" << (a + b + c) / 3;
    };
};
int main()
{
    cout << "Enter the Three Numbers:\n";
    cin >> a >> b >> c;       //input three numbers
    Average ::averageFunct(); //calling static function without object of class "Average"
    return 0;
}