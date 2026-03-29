/*
    Algorithm

    START
        Accept number as iNumber
        Initialize iSum to 0
        Iterate until iNumber becomes zero
        Extract the last digit using modulo 10
        Add the extracted digit to iSum
        Divide iNumber by 10 to move to the next digit
        Return the final sum iSum
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class SumOfDigits
{

    private :

        int iNum ;

    public :

        SumOfDigits( int iNum )
        {

            this -> iNum = iNum;

        }// End Of constructor

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : CalculateSumOfDig()
        //  Description :   It is used to calculate the sum of all digits in a number         
        //  Author :        Tushar vikas bhore
        //  Date :          29/03/2026
        //
        /////////////////////////////////////////////////////////////////

        //  The function is constant it do not change the static values
        int CalculateSumOfDig() const
        {
            
            int iDigit = 0 , iSum = 0 , iTempNum = 0;

            iTempNum = iNum;

            //  Bussiness Logic.
            while( iTempNum != 0 )
            {

                iDigit = iTempNum % 10;

                iSum = iSum + iDigit;

                iTempNum = iTempNum / 10;

            }

            return iSum;

        }// End of CalculateSumOfDig()

};//    End of class SumofDigits

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNum = 0 , iRet = 0;

    cout << "Enter the number to get the sum of digits :\t";
    cin >> iNum;

    //  Input Validation.
    if( iNum <= 0 )
    {

        cout << "Error : Please enter the non zero positive number only.\n" ;
        return -1;

    }

    SumOfDigits sodobj( iNum );
    iRet = sodobj.CalculateSumOfDig();

    cout << "\nThe sum of the digits of the number " << iNum << " is : " << iRet << " .\n";

    return 0;

}// End Of Main()


/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//      TestCase 1 :
//
//          Enter the number to get the sum of digits :     123
//
//          The sum of the digits of the number 123 is : 6 .
//
//      TestCase 2 :
//
//          Enter the number to get the sum of digits :     258
//
//          The sum of the digits of the number 258 is : 15 .
//
/////////////////////////////////////////////////////////////////