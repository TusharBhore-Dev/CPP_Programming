/*
    Algorithm

    START
        Accept number as iNum
        Calculate square of iNum
        Calculate sum of digits of the square
        Compare sum with original iNum
        If they are equal, it is a Neon number
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class CheckNeon
{

    private :

        int iNum ;
    
    public :

        CheckNeon( int iNum )
        {

            this -> iNum = iNum;

        }

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : SumOfDigits()
        //  Description :   It is used to calculate the sum of digits of the number.         
        //  Author :        Tushar vikas bhore
        //  Date :          29/03/2026
        //
        /////////////////////////////////////////////////////////////////

        int SumOfDigits( int iNumber )
        {

            int iDigit = 0 , iSum = 0;

            while( iNumber != 0 )
            {

                iDigit = iNumber % 10;   // Extract digit from square

                iSum = iSum + iDigit;

                iNumber = iNumber / 10;

            }

            return iSum;

        }   //  End Of SumOfDigits()

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : iskNeon
        //  Description :   It is used to check whether a number is Neon or not         
        //  Author :        Tushar vikas bhore
        //  Date :          29/03/2026
        //
        /////////////////////////////////////////////////////////////////

        bool isNeon()
        {

            int iNumSqr = 0 , iSumOfDigitsOfSqre = 0;

            iNumSqr = iNum * iNum;

            iSumOfDigitsOfSqre = SumOfDigits( iNumSqr );

            return ( iNum == iSumOfDigitsOfSqre );

        }   //  End of isNeon()

};  //  End Of class CheckNeon

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNum = 0;

    bool bRet = false;

    cout << "Enter the number :\t";
    cin >> iNum;

    if( iNum < 0 )
    {

        cout << "Error : Please provide the positive numbers only.\n";

        return -1;      // Filter negative input

    }

    CheckNeon cobj( iNum );

    bRet = cobj.isNeon( );

    if( bRet == true )
    {

        cout << "The number " << iNum << " is neon number.\n";

    }
    else
    {

        cout << "The number " << iNum << " is not neon number.\n";

    }

    return 0;

}   //  End Of Main()

///////////////////////////////////////////////////////////////////////
//  
//
//      TestCases successfully handled by the application
//
//          Test Case : 1
//
//              Enter the number :      9
//
//              The number 9 is neon number.
//
//          Test Case : 2
//
//              Enter the number :      12
//
//              The number 12 is not neon number.
//
//          Test Case : 3
//
//              Enter the number :      10
//
//              The number 10 is not neon number.
//
//          Test Case : 4
//
//              Enter the number :      12
//
//              The number 12 is not neon number.
//
//          Test Case : 5
//
//              Enter the number :      -5
//
//              Error : Please provide the positive numbers only.
//
//
///////////////////////////////////////////////////////////////////////