/*

    Algorithm

    START
        
        Accept the number from the user
        count the digits of the number
        Display the count of the digits

    STOP

*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class CountDigit
{

    private:

        int iNum;

    public :

        //  Parameterized constructer.
        CountDigit( int iNumber )
        {

            this -> iNum = iNumber;

        }// End of constructor.

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : CountDigitOfNum()
        //  Description :   It is used to count the digits in the number     
        //  Author :        Tushar Vikas Bhore.
        //  Date :          29/03/2026
        //
        /////////////////////////////////////////////////////////////////

        //  The const is used to convey the compiler the function will not change any static
        int CountDigitOfNum() const
        {

            int iCount = 0;
            int iTempNum = 0;
            int iDigit = 0;

            iTempNum = iNum;

            while( iTempNum != 0 )
            {

                //  To extract the last digit from number 
                iDigit = iNum % 10;

                iCount++;

                iTempNum = iTempNum / 10;

            }

            return iCount;

        }// End of CountDigitOfNum

};  //  End Of Class CountDigit

int main()
{

    int iNumber = 0 , iRet = 0;

    cout<< "Enter the number to get the count of digits : "<<"\t";
    cin>> iNumber;

    // Input Validation.
    if( iNumber <= 0 )
    {

        cout<< "\n" <<"Error : Please provide the positive number only.\n";

        return -1;

    }

    CountDigit cdobj( iNumber );

    iRet = cdobj.CountDigitOfNum();

    cout<< "\n" << "There are " << iRet << " digits in the entered number " << iNumber << " .\n";

    return 0;

}   // End Of Main()

/////////////////////////////////////////////////////////////////
//
//      Testcase succesfully handaled by the application
//
//      TestCase  : 1
//          
//          Enter the number to get the count of digits :   123654
//
//          There are 6 digits in the entered number 123654 .
//      
//      TestCase : 2
//
//          Enter the number to get the count of digits :   12354
//
//          There are 5 digits in the entered number 12354 .
//
//      TestCase : 3
//
//          Enter the number to get the count of digits :   -8
//
//          Error : Please provide the positive number only.
//
//      TestCase : 4
//      
//          Enter the number to get the count of digits :   0
//
//          Error : Please provide the positive number only.
//
///////////////////////////////////////////////////////////////////
