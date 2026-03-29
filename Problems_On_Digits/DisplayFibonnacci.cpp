/*
    Algorithm

    START
        Accept limit as iLim
        Initialize first term as 0 and next term as 1
        Iterate from 1 up to iLim
        Print the current first term
        Calculate the next term by adding first and next
        Update first term to next and next term to the calculated result
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
        //  Function Name : DisplayFibonnacci
        //  Description :   It is used to display Fibonacci series up to a given limit         
        //  Author :        Tushar vikas bhore
        //  Date :          29/03/2026
        //
        /////////////////////////////////////////////////////////////////

        void DisplayFibonnacci()
        {

            int iFirstElement = 0 , iSecElement = 1 , iNext = 0;

            cout << "\n" << "The fibonnacci series is as follow : \n";

            int iCnt = 0;

            for( iCnt = 0; iCnt < iLimit; iCnt++ )
            {

                cout << "\t "<< iFirstElement;

                iNext = iFirstElement + iSecElement;    // Sum of previous two
                iSecElement = iFirstElement;            // Shift terms
                iFirstElement = iNext;                  // Update next term

            }

        }   //  End of DisplayFibonnacci()

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
    fobj.DisplayFibonnacci();

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
