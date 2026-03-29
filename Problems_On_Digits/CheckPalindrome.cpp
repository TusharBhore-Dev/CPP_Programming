/*
    Algorithm

    START
        Accept number as iNum
        Reverse the digits of iNum
        Compare reversed number with original iNum
        If they match, it is a Palindrome
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class CheckPalindrome
{

    private:

    int iNum ;

    public :

        CheckPalindrome( int iNum )
        {

            this -> iNum = iNum;

        } // End of parameterized constructor

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : isPalindrome()
        //  Description :   It is used to check whether a number is Palindrome or not         
        //  Author :        Tushar vikas bhore
        //  Date :          29/03/2026
        //
        /////////////////////////////////////////////////////////////////

        bool isPalindrome() const
        {

            int iRevNum = 0 , iDigit = 0 , iTemp = 0;

            iTemp = iNum;

            while( iTemp != 0 )
            {

                //  To extract the digits
                iDigit = iTemp % 10 ;

                //  Business Logic
                iRevNum = iRevNum * 10 + iDigit;

                iTemp = iTemp / 10;

            }

            return( iNum == iRevNum );

        }// End of isPalindrome()

};  //  End Of Class CheckPalindrome

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNum = 0 ;
    bool bRet = false;

    cout<< "Enter the number to check it is palindrome or not :\t";
    cin >> iNum;

    // Input validation
    if( iNum <= 0 )
    {

        cout << "Error : Please enter the nonzero and positive number only.\n";

        return -1;

    }

    CheckPalindrome cobj( iNum );

    bRet = cobj.isPalindrome();

    if( bRet == true )
    {

        cout << "The number " << iNum << " is palindrome.\n";

    }
    else
    {

        cout << "The number " << iNum << " is not palindrome.\n";

    }

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//      TestCae : 1 
//      
//          Enter the number to check it is palindrome or not :     121
//          The number 121 is palindrome.
//
//      TestCae : 2 
//          
//          Enter the number to check it is palindrome or not :     232
//          The number 232 is palindrome.
//
//      TestCae : 3 
//
//          Enter the number to check it is palindrome or not :     529
//          The number 529 is not palindrome.
//
//      TestCae : 4 
//
//          Enter the number to check it is palindrome or not :     -106
//          Error : Please enter the nonzero and positive number only.
//
//
/////////////////////////////////////////////////////////////////
