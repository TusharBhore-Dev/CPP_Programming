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
            Initialize counter iCnt to 2.
            Loop while iCnt <= iNum / 2.
            If iNum is divisible by iCnt, return false.
            If no divisor is found after the loop, return true.
        Display the result.
    STOP
*/

/////////////////////////////////////////////////////////////////
//
//  Author      : Tushar vikas bhore
//  Date        : 04/03/2026
//  Description : Optimized C++ program to check Prime status 
//                using N/2 logic and a while loop.
//
/////////////////////////////////////////////////////////////////

class Logic
{

    public:

            int iNum;   // Variable to store the number to be checked

            // Parameterized constructor
            Logic( int iNo )
            {

                iNum = iNo;

            }

            // Helper function to check prime status with N/2 optimization
            bool CheckPrime()
            {

                int iCnt = 0;   // Variable for loop counter

                iCnt = 2;

                // Optimization: A factor cannot be greater than half of the number
                while( iCnt <= ( iNum / 2 ) )
                {

                    if( iNum % iCnt == 0 )
                    {

                        return false;   // Divisor found, returning false

                    }
                    
                    iCnt++; // Incrementing counter

                }   // End of while loop

                return true; // No divisors found, returning true

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