/////////////////////////////////////////////////////////////////
// 
//  Required Libraries
//
/////////////////////////////////////////////////////////////////
#include<iostream>

using namespace std;

/*
    Algorithm
    START
        Accept a number from the user in main.
        Perform validation for negative numbers.
        Create an object of Logic class using a parameterized constructor.
        Call CalculateFactorialRecursive():
            Base Case: If iNum < 1, return current iFact.
            Recursive Case: 
                Multiply static iFact by current iNum.
                Decrement iNum.
                Recursively call the function.
        Display the returned factorial value.
    STOP
*/

/////////////////////////////////////////////////////////////////
//
//  Author      : Tushar vikas bhore
//  Date        : 04/03/2026
//  Description : C++ program to calculate factorial using 
//                recursion and static variables within a class.
//
/////////////////////////////////////////////////////////////////

class Logic
{

    public:

            int iNum;   // Variable to store the input number

            // Parameterized constructor to initialize characteristic
            Logic( int iNo )
            {

                iNum = iNo;
            
            }

            // Helper function to perform recursive calculation
            int CalculateFactorialRecursive()
            {

                // Static variable to preserve value across recursive calls
                static int iFact = 1;

                // Base condition to stop recursion
                if( iNum >= 1  )
                {

                    iFact = iFact * iNum; // Multiplication logic
                    iNum--;               // Decrementing for next call

                    // Recursive call to itself
                    CalculateFactorialRecursive();
                    
                }   // End of if

                return iFact;

            }   // End of CalculateFactorialRecursive helper function

};

int main()
{

    int iNum = 0;   // Variable to store user input

    cout<< "Enter the number :\t";
    cin>>iNum;

    // Input validation for negative numbers
    if( iNum < 0 )
    {

        cout<< "Error : Please enter the positive numbers only.\n";
        return -1;

    }

    // Creating object of Logic class with user input
    Logic lobj( iNum );

    // Calling the recursive function and displaying result
    cout<< "The factorial is : "<<lobj.CalculateFactorialRecursive()<<".\n";

    return 0;

}   // End of main function