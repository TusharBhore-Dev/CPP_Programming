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
        Validate for edge cases (negative, 0, or 1).
        Create an object of the Logic class.
        In CheckPrimeRecursive helper function:
            Base Case 1: If iCnt exceeds iNum/2, return true (it is Prime).
            Base Case 2: If iNum is divisible by iCnt, return false (not Prime).
            Recursive Case: Increment iCnt and call the function again.
        Display the result.
    STOP
*/

/////////////////////////////////////////////////////////////////
//
//  Author      : Tushar vikas bhore
//  Date        : 04/03/2026
//  Description : C++ program to check Prime status using 
//                Recursion with static counter.
//
/////////////////////////////////////////////////////////////////

class Logic
{

    public:

            int iNum;   // Variable to store input number

            // Parameterized constructor
            Logic( int iNo )
            {

                iNum = iNo;

            }

            // Helper function to check prime status using recursion
            bool CheckPrimeRecursive()
            {

                static int iCnt = 2;    // Static counter for recursion starting from 2

                // Base Case: If we've checked up to N/2 without finding a factor
                if( iCnt <= ( iNum / 2 ) )
                {

                    // Logic: If divisible, it is not prime
                    if( iNum % iCnt == 0 )
                    {

                        return false;

                    }
                    
                    iCnt++; // Incrementing counter for next recursive level

                    // Recursive call to move to the next divisor
                    return CheckPrimeRecursive();

                }   

                return true; // No factors found, number is prime

            }   // End of CheckPrimeRecursive helper function

};

int main()
{

    int iValue = 0;     // Variable to store user input

    cout<<"Enter the number to check it is prime or composite:\t";
    cin>>iValue;

    // Validation for edge cases
    if( iValue < 0 )
    {

        cout<< "\nError : Please enter the positive numbers only.\n" ;
        return -1;

    }
    else if( iValue == 0 )
    {

        cout<< "\nThe Zero is not prime.\n" ;
        return -1;

    }
    else if( iValue == 1 )
    {

        cout<< "\nThe number one is nor prime nor composite.\n" ;
        return -1;

    }

    Logic lobj( iValue );   // Creating instance of Logic class

    // Calling the recursive helper function and displaying result
    if( lobj.CheckPrimeRecursive() == true )
    { 

        cout<<"\nThe number is prime.\n";

    }
    else
    {

        cout<<"\nThe number is not prime.\n";

    }

    return 0;

}   // End of main function