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
        Validate for edge cases (negative, zero, or one).
        Create an object of the Logic class.
        In CheckPrime helper function:
            Initialize counter iCnt to 2.
            Loop while iCnt is less than or equal to iNum / 2.
            If iNum is divisible by iCnt, return false (Not Prime).
            If loop ends without finding a factor, return true (Prime).
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

            // Helper function to check prime status using while loop
            bool CheckPrime()
            {

                int iCnt = 0;   // Variable for loop counter

                iCnt = 2;

                // Optimization: Loop up to iNum / 2
                while( iCnt <= ( iNum / 2 ) )
                {

                    // Logic: If divisible, it is not prime
                    if( iNum % iCnt == 0 )
                    {

                        return false;

                    }
                    
                    iCnt++; // Incrementing counter to check next number

                }   // End of while loop

                return true; 

            }   // End of CheckPrime helper function

};

int main()
{

    int iValue = 0;     // Variable to store user input

    cout << "Enter the number to check it is prime or composite:\t";
    cin >> iValue;

    // Validation for edge cases
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

    Logic lobj( iValue );   // Creating object of Logic class

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