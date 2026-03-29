/*
    Algorithm

    START
        Accept limit as iLim
        Initialize first term to 0, next to 1, and counter to 1
        While counter is less than or equal to iLim:
            Print the current first term
            Calculate sum of first and next terms
            Update first to next and next to the sum
            Increment the counter
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class Fibonnacci
{

    private :

        int iLimit;

    public :

        Fibonnacci( int iLim )
        {

            this -> iLimit = iLim;

        }   //  End of constructor

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : DisplayFibonnacciWhile
        //  Description :   It is used to display Fibonacci series using a ( while loop )          
        //  Author :        Tushar vikas bhore
        //  Date :          29/03/2026
        //
        /////////////////////////////////////////////////////////////////

        void DisplayFibonnacciWhile()
        {

            int iFirstElement = 0 , iSecElement = 1 , iNext = 0;

            cout << "\n" << "The fibonnacci series is as follow : \n";

            int iCnt = 0;

            //  Business Logic
            while( iCnt < iLimit )
            {

                cout << "\t "<< iFirstElement;

                iNext = iFirstElement + iSecElement;    // Sum of previous two
                iSecElement = iFirstElement;            // Shift terms
                iFirstElement = iNext;                  // Update next term

                iCnt++;

            }// End of while

        }   //  End of DisplayFibonnacciWhile()

};  //  End of class Fionnacci

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iLimit = 0;

    cout << "Enter the limit upto how much elements of fibonnacci series you want :\t";
    cin >> iLimit;

    //  Input Validation.
    if( iLimit <= 0 )
    {

        cout << "Error : Please provide the valid input only.\n" ;
        
        return -1;

    }

    Fibonnacci fobj( iLimit );
    fobj.DisplayFibonnacciWhile();

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
// 
//     TestCase 1 :
//
//          Enter the limit upto how much elements of fibonnacci series you want :  10
//
//          The fibonnacci series is as follow :
//              0       1       1       2       3       5       8       13      21      34
//
//     TestCase 2 :
//          
//          Enter the limit upto how much elements of fibonnacci series you want :  5
//
//          The fibonnacci series is as follow :
//              0       1       1       2       3
/////////////////////////////////////////////////////////////////
