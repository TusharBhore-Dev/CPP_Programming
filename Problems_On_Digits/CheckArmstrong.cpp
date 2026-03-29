/*

    Algorithm

    START
        
        Accept the number from the user
        count the digits of the number
        sum the digit pow to the count
        check sum is eqal to actual number
        if yes display it is armstrong
        if no display it is not an armstrong number.

    STOP

*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>
#include<cmath>

using namespace std;

class CheckArmstrong
{

    private:

        int iNum ;

    public :

        //  Parameterized constructer.
        CheckArmstrong( int iNum )
        {

            this -> iNum = iNum;

        }// End of parametrized constructor.

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
        //  Function Name : SumOfDigitsPowToCount()
        //  Description :   It is used to calculate the sum digit power to count    
        //  Author :        Tushar Vikas Bhore.
        //  Date :          29/03/2026
        //
        /////////////////////////////////////////////////////////////////

        int SumOfDigitsPowToCount() 
        {

            int iSum = 0 , iCount = 0 , iTemp = 0;

            double dDigit = 0.0; // To get the full number at pow function
            
            iTemp = iNum;

            iCount = CountDigits( iTemp );

            while( iTemp != 0 )
            {

                dDigit = iTemp % 10;

                dDigit = pow( dDigit , iCount );    //  used built in pow function to calculate the power

                iSum = iSum + dDigit;

                iTemp = iTemp / 10;

            }

            return iSum;

        }// End of SumOfDigitsPowToCount()

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : isArmstrong()
        //  Description :   It is used to check the number is armstrong or not.   
        //  Author :        Tushar Vikas Bhore.
        //  Date :          29/03/2026
        //
        /////////////////////////////////////////////////////////////////

        bool isArmstrong()
        {

            int iTemp = 0 , iSum = 0 ;

            iTemp = iNum;

            iSum = SumOfDigitsPowToCount();

            return ( iSum == iTemp );   // Returning the result of comparision.

        }// End of isArmstrong()

};  //  End of class CheckArmstrong

int main()
{

    int iNumber = 0;
    bool bRet = 0;

    cout << "Enter the number to check is it armstong or not :\t";
    cin >> iNumber;

    //  Input   Validation.
    if( iNumber <= 0 )
    {

        cout << "Error : Please provide the nonzero and positive input only.\n";

        return -1;

    }

    CheckArmstrong cobj( iNumber );

    bRet = cobj.isArmstrong();

    if( bRet == true )
    {

        cout << "\n" << "The entered number "<<iNumber<<" is an armstrong number.\n";

    }
    else
    {

        cout << "\n" << "The entered number "<<iNumber<<" is not an armstrong number.\n";
        
    }

    return 0;

}   // End Of Main()

/////////////////////////////////////////////////////////////////
//
//      Testcase succesfully handaled by the application
//
//      TestCase  : 1
//          
//          Enter the number to check is it armstong or not :       153
//
//          The entered number 153 is an armstrong number.
//
//      TestCase : 2
//
//          Enter the number to check is it armstong or not :       370
//
//          The entered number 370 is an armstrong number.
//
//      TestCase : 3
//      
//          Enter the number to check is it armstong or not :       0
//          
//          Error : Please provide the nonzero and positive input only.
//
//      TestCase : 4
//      
//          Enter the number to check is it armstong or not :       -5
//          
//          Error : Please provide the nonzero and positive input only.
//
///////////////////////////////////////////////////////////////////
