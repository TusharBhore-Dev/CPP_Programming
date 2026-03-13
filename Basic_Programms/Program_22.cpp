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
        Create an object of Logic class.
        Call Accept() to get input from the user.
        Call CalculateFactorial():
            If input is negative, display error.
            If positive, loop from 1 to iNum.
            Multiply and store product in iFact.
            Return the result.
        Display the result in main.
    STOP
*/

/////////////////////////////////////////////////////////////////
//
//  Author      : Tushar vikas bhore
//  Date        : 04/03/2026
//  Description : Program to calculate factorial of a number
//                using Object-Oriented Programming.
//
/////////////////////////////////////////////////////////////////

class Logic
{

    public:

            int iNum;   // Variable to store input number
            int iFact;  // Variable to store result of factorial

            // Default constructor to initialize data members
            Logic()
            {

                iNum = 0;
                iFact = 1;

            }

            // Helper function to accept input
            void Accept()
            {

                cout<< "Enter the number :\t"; 
                cin>> iNum;

            }   // End of Accept helper function

            // Helper function to perform calculation
            int CalculateFactorial()
            {

                // Validation for negative numbers
                if( iNum < 0 )
                {

                    cout<< "Error : Please enter the positive numbers only.\n";
                    return -1; // Returning -1 to indicate error

                }
                else
                {

                    int iCnt = 0;   // Variable for loop counter

                    for( iCnt = 1; iCnt <= iNum; iCnt++ )
                    {

                        iFact = iFact * iCnt;

                    }

                    return iFact;

                }

            }   // End of CalculateFactorial helper function

};

int main()
{

    Logic lobj;     // Creating object of Logic class

    lobj.Accept();
    
    int iRet = lobj.CalculateFactorial(); // Variable to store return value

    if(iRet != -1)
    {
        cout<< "The factorial is : " << iRet << ".\n";
    }

    return 0;

}   // End of main function