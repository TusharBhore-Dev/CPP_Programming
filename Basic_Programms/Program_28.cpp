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
        Create an object of the Logic class.
        In CheckPrime helper function:
            Initialize a loop from 2 up to iNum / 2.
            If iNum is divisible by the counter, return false.
            If the loop completes without finding a factor, return true.
        Display the result.
    STOP
*/

/////////////////////////////////////////////////////////////////
//
//  Author      : Tushar vikas bhore
//  Date        : 04/03/2026
//  Description : Optimized C++ program to check Prime status 
//                using N/2 logic and for loop.
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

            // Helper function to check prime status
            bool CheckPrime()
            {

                int iCnt = 0;   // Variable for loop counter

                // Optimization: Loop runs up to half of the number
                for( iCnt = 2; iCnt <= ( iNum / 2 ) ; iCnt++ )
                {

                    // Check for divisibility
                    if( iNum % iCnt == 0 )
                    {

                        return false;   // Divisor found, return false

                    }   

                }   // End of for loop

                return true;            // No divisors found, return true

            }   // End of CheckPrime helper function

};

int main()
{

    int iValue = 0;     // Variable to store user input

    cout << "Enter the number to check it is prime or composite:\t";
    cin >> iValue;

    // Edge case validation
    if( iValue < 0 )
    {

        cout << "\nError : Please enter the positive numbers only.\n";
        return -1;

    }
    else if( iValue == 0 )
    {

        cout << "\nThe Zero is not prime.\n";
        return -1;

    }
    else if( iValue == 1 )
    {

        cout << "\nThe number one is nor prime nor composite.\n";
        return -1;

    }

    Logic lobj( iValue );   // Object of Logic class

    // Calling the helper function and checking return value
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