/*
    Algorithm

    START
        Accept number as iNum
        Initialize sum to 0 and product to 1
        Extract each digit from the number
        Add the digit to sum and multiply it with product
        If sum equals product, it is a Spy number
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class CheckSpy
{

    private :

        int iNum ;

    public :

        CheckSpy( int iNum )
        {

            this->iNum = iNum;

        }// End of constructor

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : isSpy
        //  Description :   It is used to check whether a number is Spy or not         
        //  Author :        Tushar vikas bhore
        //  Date :          29/03/2026
        //
        /////////////////////////////////////////////////////////////////

        bool isSpy() const
        {

            int iDigit = 0 , iSumOfDigits = 0, iProductOfDigits = 0 , iTempNum = 0;
            
            //  product should not be zero at start if it will be zero ans will be zero
            iProductOfDigits = 1;
            
            iTempNum = iNum;

            while( iTempNum != 0 )
            {

                iDigit = iTempNum % 10;                         // Extract digit

                iSumOfDigits = iSumOfDigits + iDigit;       // Calculate sum
                iProductOfDigits = iProductOfDigits * iDigit; // Calculate product

                iTempNum = iTempNum / 10;

            }

            return( iSumOfDigits == iProductOfDigits );     // Comparison logic

        }   // End Of isSpy().

};//    End of Class CheckSpy.

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
    cin >> iNum ;

    if( iNum <= 0 )  // Validation check
    {

        cout << "Error : Please provide non zero and positive values only.\n";

        return -1;

    }

    CheckSpy csobj( iNum );
    bRet = csobj.isSpy();

    if( bRet == true )
    {

        cout << "The entered number " << iNum << " is a spy number.\n";

    }
    else
    {

        cout << "The entered number " << iNum << " is not a spy number.\n";

    }

    return 0;

}  // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 1124        Output : Spy (1+1+2+4 = 8, 1*1*2*4 = 8)
//  Input : 123         Output : Spy (1+2+3 = 6, 1*2*3 = 6)
//  Input : 124         Output : Not a Spy (1+2+4 = 7, 1*2*4 = 8)
//
/////////////////////////////////////////////////////////////////