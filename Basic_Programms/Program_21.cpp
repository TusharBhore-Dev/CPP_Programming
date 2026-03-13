/*
    Algorithm

    START
        1. Define class 'Logic' with data members iNum, iNumTwo, and iNumThird.
        2. Create a parameterized constructor to initialize these members.
        3. Define 'CheckGreater' method:
           - Use (iNo1 > iNo2 && iNo1 > iNo3) to find the largest.
        4. In main:
           - Accept 3 integers from user.
           - Use a filter (if condition) to check for equal numbers.
           - If unique, create object and call the method.
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header Files
//
/////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

/////////////////////////////////////////////////////////////////
//
//  Class Name :  Logic
//  Description : Handles multi-variable comparison using OOP
//  Author :      Tushar vikas bhore
//  Date :        25/02/2026
//
/////////////////////////////////////////////////////////////////

class Logic 
{

    public:

            int iNum = 0, iNumTwo = 0 , iNumThird = 0;

            // Constructor to initialize member variables
            Logic( int iNo1 , int iNo2 , int iNo3 )
            {

                iNum = iNo1;
                iNumTwo = iNo2;
                iNumThird = iNo3;

            }

            // Method to find and print the largest value
            void CheckGreater( )
            {

                if( iNum > iNumTwo && iNum > iNumThird )
                {

                    printf("\nThe %d is greater.\n",iNum);

                }
                else if( iNumTwo > iNum && iNumTwo > iNumThird )
                {

                    printf("\nThe %d is greater.\n",iNumTwo);

                }
                else
                {

                    printf("\nThe %d is greater.\n",iNumThird);

                }

            }

};

/////////////////////////////////////////////////////////////////
//
//  Entry point function
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNum1 = 0 , iNum2 = 0 , iNum3 = 0;
    
    cout<< "Enter the first number :\t";
    cin>> iNum1;

    cout<< "Enter the secend number :\t";
    cin>> iNum2;

    cout<< "Enter the third number :\t";
    cin>> iNum3;

    // Filter to handle duplicate inputs
    if( ( iNum1 == iNum2 == iNum3 ) || ( iNum1 == iNum2 ) || ( iNum2 == iNum3 ) || ( iNum1 == iNum3 ) )
    {

        printf("\nError : Don't enter the equal numbers.\n");
        return -1;

    }
    else
    {

        Logic lobj( iNum1 , iNum2 , iNum3 );

        lobj.CheckGreater();

    }

    return 0;

}