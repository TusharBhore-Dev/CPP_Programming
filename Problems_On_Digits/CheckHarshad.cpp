/*
    Algorithm

    START
        Accept number as iNum
        Calculate sum of all digits of iNum
        Divide original iNum by the sum of digits
        If remainder is 0, it is a Harshad number
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class CheckHarshad
{

    private :

        int iNum ;
    
    public :

        //  Parameterized Constructor.

        CheckHarshad( int iNum )
        {

            this->iNum = iNum;

        }   //  End Of Constructor
   
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

                iDigit = iNumber % 10;

                iSum = iSum + iDigit;

                iNumber = iNumber / 10;

            }

            return iSum;

        }   //  End Of SumOfDigits()

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : isHarshad()
        //  Description :   It is used to check whether a number is Harshad or not         
        //  Author :        Tushar vikas bhore
        //  Date :          29/03/2026
        //
        /////////////////////////////////////////////////////////////////

        bool isHarshad()
        {

            int iSumofDigit = 0, iDigit = 0 , iTempNum = 0;

            iTempNum = iNum;

            iSumofDigit = SumOfDigits( iTempNum );  //  To Get the sum of Digits.

            return( iTempNum % iSumofDigit == 0 );

        }   //  End Of isHarshad().

};  //  End of Class CheckHarshad

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNum = 0;
    bool bRet = false;

    cout << "Enter the number to check is it harshad(niven) number or not :\t";
    cin >> iNum ;

    //  Input   Validation.
    if( iNum <= 0 )
    {

        cout << "Error : Please enter the non zero and positive number only.\n";
        return -1;

    }

    CheckHarshad cobj( iNum );
    bRet = cobj.isHarshad();

    if( bRet == true )
    {

        cout<< "The entered number " << iNum << " is harshad (Niven) number.\n";

    }
    else
    {

        cout<< "The entered number " << iNum << " is not harshad (Niven) number.\n";

    }

    return 0;

}   //  End Of Main()
/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  TestCase : 1 
//
//      Enter the number to check is it harshad(niven) number or not :  3
//      The entered number 3 is harshad (Niven) number.
//
//  TestCase : 2
//
//      Enter the number to check is it harshad(niven) number or not :  18
//      The entered number 18 is harshad (Niven) number.
//
//  TestCase : 3
//
//      Enter the number to check is it harshad(niven) number or not :  15
//      The entered number 15 is not harshad (Niven) number.
//
//  TestCase : 4
//
//      Enter the number to check is it harshad(niven) number or not :  9
//      The entered number 9 is harshad (Niven) number.
//
//  TestCase : 5
//
//      Enter the number to check is it harshad(niven) number or not :  -5
//      Error : Please enter the non zero and positive number only.
/////////////////////////////////////////////////////////////////