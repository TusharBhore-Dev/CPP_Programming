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
        Call Accept() method to get the number from the user.
        Call CalculateFactorial() method:
            Check if the number is negative for validation.
            Initialize iCnt to 1.
            Use a while loop to multiply iFact by iCnt until iCnt > iNum.
            Return the result.
        Display the result.
    STOP
*/

/////////////////////////////////////////////////////////////////
//
//  Author      : Tushar vikas bhore
//  Date        : 04/03/2026
//  Description : program to calculate factorial using a 
//                while loop within an OOP structure.
//
/////////////////////////////////////////////////////////////////

class Logic
{

    public:

            int iNum;   // Variable to store user input
            int iFact;  // Variable to store factorial result

            // Default constructor
            Logic()
            {

                iNum = 0;
                iFact = 1;

            }

            // Helper function to accept user input
            void Accept()
            {

                cout<< "Enter the number :\t"; 
                cin>> iNum;

            }   // End of Accept helper function

            // Helper function to calculate factorial using while loop
            int CalculateFactorial()
            {
  
                // Validation for negative input
                if( iNum < 0 )
                {

                    cout<< "Error : Please enter the positive numbers only.\n";
                    return 0;

                }
                else
                {

                    int iCnt = 0;   // Loop counter variable

                    iCnt = 1;

                    // Iterating using while loop
                    while( iCnt <= iNum  )
                    {

                        iFact = iFact * iCnt;
                        iCnt++;
                        
                    }   // End of while loop

                    return iFact;

                }

            }   // End of CalculateFactorial helper function

};

int main()
{

    Logic lobj;     // Object creation

    lobj.Accept();
    
    // Printing result by calling the helper function
    cout<< "The factorial is : "<<lobj.CalculateFactorial()<<".\n";

    return 0;

}   // End of main function