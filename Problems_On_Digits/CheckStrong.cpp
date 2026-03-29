/*
    Algorithm

    START
        Accept number as iNum
        Extract each digit from the number
        Calculate factorial of each extracted digit
        Sum the factorials of all digits
        Compare the sum with original iNum
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class CheckStrong
{

    private :

        int iNum ;

    public :

        CheckStrong( int iNum )
        {

            this -> iNum = iNum;

        }// End of Parameterized Constructor

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : isStrong
        //  Description :   It is used to check whether a number is Strong or not         
        //  Author :        Tushar vikas bhore
        //  Date :          29/03/2026
        //
        /////////////////////////////////////////////////////////////////

        bool isStrong()
        {

            int iFact = 1 , iDigit = 0 , iTemp = 0 , iSumOfFactOfDig = 0;

            iTemp = iNum;

            while( iTemp != 0 )
            {

                iDigit = iTemp % 10;

                iFact = 1;
                while(  iDigit >= 1  )                      // Factorial calculation
                {

                    iFact = iFact * iDigit;
                    iDigit--;
                }

                iSumOfFactOfDig = iSumOfFactOfDig + iFact;  // Sum of factorials

                iTemp = iTemp / 10;

            }

            return ( iNum == iSumOfFactOfDig );            // comparison

        }// End of isStrong

};  //  End of Class CheckStrong

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNum = 0;
    bool bRet = false;

    cout << "Enter the number to check is it strong number or not :\t";
    cin >> iNum;

    //  Input Validation.
    if( iNum <= 0 )
    {

        cout << "\nError : Please provide non zero positive values only.\n";
        return -1;

    }

    CheckStrong csobj( iNum );
    bRet = csobj.isStrong();

    if( bRet == true )
    {

        cout << "The number " << iNum << " is strong number.\n";

    }
    else
    {

        cout << "The number " << iNum << " is not strong number.\n";

    }

    return 0;

} // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 145         Output : Strong (1! + 4! + 5! = 145)
//  Input : 2           Output : Strong (2! = 2)
//  Input : 123         Output : Not a Strong number
//
/////////////////////////////////////////////////////////////////