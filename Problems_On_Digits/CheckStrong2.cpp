/*
    Algorithm

    START
        Accept number as iNum
        Initialize a lookup table for factorials of digits 0-9
        Extract each digit from the number
        Fetch the factorial from the table and add it to sum
        Compare the total sum with the original number
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


        //  Const is used to denote that the function is not going to change any static value
        bool isStrong() const
        {

            int iSumOfFactOfDigit = 0 , iTemp = 0 , iDigit = 0;
            iTemp = iNum;

            // Lookup table for factorials                                              
            //index:            0   1   2   3    4   5      6     7      8       9                
            int FactArr[10] = { 1 , 1 , 2 , 6 , 24 , 120 , 720 , 5040 , 40320 , 362880 };

            while( iTemp != 0 )
            {

                iDigit = iTemp % 10;

                //  Business Logic
                iSumOfFactOfDigit = iSumOfFactOfDigit + FactArr[iDigit];

                iTemp = iTemp / 10;

            }

            //  Comparing
            return ( iNum == iSumOfFactOfDigit );
    
        }

};//  End of Class CheckStrong

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

