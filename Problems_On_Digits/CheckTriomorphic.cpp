/*
    Algorithm

    START
        Accept number as iNum
        Calculate cube of iNum
        Count digits in iNum
        Compare last digits of cube with iNum
        If they match, it is Triomorphic
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class CheckTrioMorphic
{

    private :

        int iNum;

    public :

        CheckTrioMorphic( int iNum )
        {

            this -> iNum  = iNum;

        }// End of constructor

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : CountDigits()
        //  Description :   It is used to count the digits in the number     
        //  Author :        Tushar Vikas Bhore.
        //  Date :          29/03/2026
        //
        /////////////////////////////////////////////////////////////////

        int CountDigits( int iValue ) const
        {

            int iCount = 0 ;

            while( iValue != 0 )
            {

                iCount++;

                iValue = iValue / 10;

            }

            return iCount;

        }   //  end of countDigits()

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : isTrioMorphic()
        //  Description :   It is used to check whether a number is Triomorphic or not         
        //  Author :        Tushar vikas bhore
        //  Date :          16/03/2026
        //
        /////////////////////////////////////////////////////////////////

        bool isTrioMorphic()
        {

            int iTempNum = 0 , iCountDigits = 0 , iDigit = 0 , iLastDigOfNum = 0 , iLastDigOfCube = 0 , iNumCube = 0 , iCnt = 0;

            iNumCube = iNum * iNum * iNum;

            iTempNum = iNum;

            iCountDigits = CountDigits( iTempNum );

            //  Business Logic.
            for( iCnt = 1; ( iCnt <= iCountDigits ) && ( iTempNum != 0 ) && ( iNumCube != 0 ); iCnt++ )
            {

                iDigit = iTempNum % 10;

                iLastDigOfNum = iLastDigOfNum * 10 + iDigit;

                iTempNum = iTempNum / 10;

                iDigit = iNumCube % 10;

                iLastDigOfCube = iLastDigOfCube * 10 + iDigit;

                iNumCube = iNumCube / 10;

            }

            return( iLastDigOfNum == iLastDigOfCube );

        }// End of isTrioMorphic()

};  //  End of class CheckTriomorphic

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNum = 0;
    bool bRet = false;

    cout << "Enter the number to check is it triomorphic or not :\t";
    cin >> iNum;

    //  Input Validation.
    if( iNum <= 0 )
    {

        cout << "Error : Please provide the non zero and positive number only.\n";

        return -1;

    }

    CheckTrioMorphic ctobj( iNum );
    bRet = ctobj.isTrioMorphic();

    if( bRet == true )
    {

        cout << "The entered number "<<iNum<< " is triomorphic.\n";

    }
    else
    {

        cout << "The entered number "<<iNum<< " is not triomorphic.\n";

    }

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5           Output : Triomorphic
//  Input : 24          Output : Triomorphic 
//  Input : 25          Output : Triomorphic 
//  Input : 7           Output : Not Triomorphic 
//
/////////////////////////////////////////////////////////////////