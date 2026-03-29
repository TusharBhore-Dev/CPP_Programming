/*
    Algorithm

    START
        Accept number as iNum
        Initialize iRevNum to 0
        Iterate until iNum becomes zero
        Extract the last digit of iNum using modulo 10
        Update iRevNum by multiplying it by 10 and adding the extracted digit
        Divide iNum by 10 to remove the processed digit
        Return the final reversed number iRevNum
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class ReverseNumber
{

    private :

        int iNum;

    public :

        ReverseNumber( int iNum )
        {

            this -> iNum = iNum;

        }   //  End of constructor.

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : ReverseNum()
        //  Description :   It is used to reverse the digits of a given number         
        //  Author :        Tushar vikas bhore
        //  Date :          29/03/2026
        //
        /////////////////////////////////////////////////////////////////

        //The function is const it does not changes the static data
        int ReverseNum() const
        {
 
            int iRevNum = 0 , iDigit = 0 , iTempNum = 0;
            
            iTempNum = iNum;

            //  Business Logic.
            while( iTempNum != 0 )
            {

                iDigit = iTempNum % 10;

                iRevNum = iRevNum * 10 + iDigit;

                iTempNum = iTempNum / 10;

            }

            return iRevNum;

        }// End of ReverseNum()

};//    End of class ReverseNumber


/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////


int main()
{

    int iNumber = 0 , iRevNum = 0;

    cout << "Enter the number to reverse the number :\t";
    cin >> iNumber ;

    // Input Validation
    if( iNumber <= 0 )
    {

        cout << "Error : Please enter the positive and non zero number.\n";
        return -1;

    }

    ReverseNumber robj( iNumber );
    iRevNum = robj.ReverseNum();

    cout << "The entered number is : " << iNumber << " .\n";
    cout << "The reversed number is : " << iRevNum << " .\n";

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//      TestCase 1 : 
//
//          Enter the number to reverse the number :        523
//
//          The entered number is : 523 .
//          The reversed number is : 325 .
//
//      TestCase 2 :
//
//          Enter the number to reverse the number :        1253
//
//          The entered number is : 1253 .
//          The reversed number is : 3521 .
//
//      TestCase 3 :
//
//          Enter the number to reverse the number :        -5
//
//          Error : Please enter the positive and non zero number.
//
/////////////////////////////////////////////////////////////////