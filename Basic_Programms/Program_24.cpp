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
        Call Accept() to take input from user.
        Call CalculateFactorial():
            Check if the number is negative.
            If positive, use a while loop that runs while iNum >= 1.
            Multiply iFact by iNum and decrement iNum in each step.
            Return the final value of iFact.
        Print the result in main.
    STOP
*/

/////////////////////////////////////////////////////////////////
//
//  Author      : Tushar vikas bhore
//  Date        : 04/03/2026
//  Description : program to calculate factorial using a 
//                decrementing while loop.
//
/////////////////////////////////////////////////////////////////

class Logic
{

    public:

            int iNum;   // Variable to store input number
            int iFact;  // Variable to store the factorial product

            // Default constructor
            Logic()
            {

                iNum = 0;
                iFact = 1;

            }

            // Helper function to accept data
            void Accept()
            {

                cout<< "Enter the number :\t"; 
                cin>> iNum;

            }   // End of Accept helper function

            // Helper function to calculate factorial
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

                    // Decrementing while loop (Count-down approach)
                    while( iNum >= 1  )
                    {

                        iFact = iFact * iNum;
                        iNum--;
                        
                    }   // End of while loop

                    return iFact;

                }

            }   // End of CalculateFactorial helper function

};

int main()
{

    Logic lobj;     // Object instantiation

    lobj.Accept();
    
    // Calling the processing method and displaying result
    cout<< "The factorial is : "<<lobj.CalculateFactorial()<<".\n";

    return 0;

}   // End of main function