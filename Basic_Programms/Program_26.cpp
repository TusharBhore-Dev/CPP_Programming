/////////////////////////////////////////////////////////////////
// 
//  Required Libraries
//
/////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

/*
    Algorithm
    START
        Accept a number from the user in main.
        Validate for edge cases (negative, 0, or 1).
        If valid, create an object of the Logic class.
        In CheckPrime helper function:
            Iterate from 2 up to iNum - 1.
            If iNum is divisible by the counter, return false (Not Prime).
            If no divisor is found after full loop, return true (Prime).
        Display the result.
    STOP
*/

/////////////////////////////////////////////////////////////////
//
//  Author      : Tushar vikas bhore
//  Date        : 04/03/2026
//  Description : C++ program to check Prime status using 
//                Object-Oriented Programming.
//
/////////////////////////////////////////////////////////////////

class Logic
{

    public:

            int iNum;   // Variable to store the input number

            // Parameterized constructor
            Logic( int iNo )
            {

                iNum = iNo;

            }

            // Helper function to check if the number is prime
            bool CheckPrime()
            {

                int iCnt = 0;   // Variable for loop counter

                // Standard loop from 2 to N-1
                for( iCnt = 2; iCnt < iNum; iCnt++ )
                {

                    if( iNum % iCnt == 0 )
                    {

                        return false;   // Divisor found, so not prime

                    }

                }   // End of for loop

                return true;            // No divisors found, it's prime

            }   // End of CheckPrime helper function

};

int main()
{

    int iValue = 0;     // Variable to store user input

    cout << "Enter the number to check it is prime or composite:\t";
    cin >> iValue;

    // Validation for negative numbers
    if( iValue < 0 )
    {

        cout << "\nError : Please enter the positive numbers only.\n";
        return -1;

    }
    // Validation for Zero
    else if( iValue == 0 )
    {

        cout << "\nThe Zero is not prime.\n";
        return -1;

    }
    // Validation for One
    else if( iValue == 1 )
    {

        cout << "\nThe number one is nor prime nor composite.\n";
        return -1;

    }

    Logic lobj( iValue );   // Creating object of Logic class

    // Calling helper function and checking return value
    if( lobj.CheckPrime() == true )
    { 

        cout << "\nThe number is prime.\n";

    }
    else
    {

        cout << "\nThe number is not prime.\n";

    }

    return 0;

}   // End of main function