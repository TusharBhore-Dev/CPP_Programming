/*
    Algorithm

    START
        Accept number as iNum
        Calculate square of iNum
        Count digits in iNum
        Extract last 'n' digits of square
        Compare extracted digits with iNum
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class CheckAutomorphic
{

    private :

        int iNum ;

    public :

        CheckAutomorphic( int iNum )
        {

            this -> iNum = iNum;

        }// Endof Constructor

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
            //  Function Name : isAutomorphic
            //  Description :   It is used to check whether a number is Automorphic or not         
            //  Author :        Tushar vikas bhore
            //  Date :          29/03/2026
            //
            /////////////////////////////////////////////////////////////////

        bool isAutoMorphic()
        {
            
            int iCnt = 0 , iCountDig = 0 , iNumsqre = 0 , iDigit = 0 , iTempNum = 0 , iLastDigOfNum = 0, iLastDigOfsqre = 0;

            iNumsqre = iNum * iNum;
            iTempNum = iNum;

            iCountDig = CountDigits( iTempNum );

            for( iCnt = 1; ( iCnt <= iCountDig ) && ( iTempNum != 0 ) && ( iNumsqre != 0 ); iCnt++ )
            {

                iDigit = iTempNum % 10;

                iLastDigOfNum = iLastDigOfNum * 10 + iDigit;    //  Reverse the last digits of number

                iTempNum = iTempNum / 10;

                iDigit = iNumsqre % 10;

                iLastDigOfsqre = iLastDigOfsqre * 10 + iDigit;  //  Reverse the last digits of square

                iNumsqre = iNumsqre / 10;

            }

            return( iLastDigOfNum == iLastDigOfsqre );      // Verification logic

        }   //  End of isAutomorphic()

};  //  End of class  CheckAutomorphic

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////


int main()
{

    int iNum = 0;
    bool bRet = false;

    cout << "Enter the number to check is it automorphic or not :\t";
    cin >> iNum ;

    if( iNum <= 0 )
    {

        cout << "Error : Please provide the non zero and positive number only.\n" ;

        return -1;

    }

    CheckAutomorphic cobj( iNum );
    
    bRet = cobj.isAutoMorphic();

    if( bRet == true )
    {

        cout << "The entered number " << iNum <<" is automorphic."<<"\n" ;

    }
    else
    {

        cout << "The entered number " << iNum <<" is not automorphic."<<"\n" ;

    }

    return 0;

}  // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//      
//      TestCase : 1    
//          
//          Enter the number to check is it automorphic or not :    25
//          The entered number 25 is automorphic.
//      
//      TestCase : 2
//
//          Enter the number to check is it automorphic or not :    76
//          The entered number 76 is automorphic.
//
//      TestCase : 3
//          
//          Enter the number to check is it automorphic or not :    376
//          The entered number 376 is automorphic.
//
//     TestCase : 4
//
//          Enter the number to check is it automorphic or not :    371
//          The entered number 371 isnot automorphic.
//
//
/////////////////////////////////////////////////////////////////