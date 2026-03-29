/*
    Algorithm

    START
        Accept number as iNum and target digit as iDig
        Extract each digit from iNum
        If extracted digit matches iDig, increment counter
        Continue until all digits are checked
        Display the final frequency count
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class CountDigitFreq
{

    private :

        int iNum;

        int iDig;

    public :

        CountDigitFreq( int iNum , int iDig )
        {

            this -> iNum = iNum;

            this -> iDig = iDig;

        }// End of parameterized constructor
        
        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : CalcDigitFreq()
        //  Description :   It is used to count frequency of a specific digit         
        //  Author :        Tushar vikas bhore
        //  Date :          29/03/2026
        //
        /////////////////////////////////////////////////////////////////

        int CalcDigitFreq() const
        {

            int iCountFreq = 0 , iDigit = 0 , iTempNum = 0, iTempDig = 0;

            //  creating temporary data copy of static data
            iTempNum = iNum;
            iTempDig = iDig;

            //  Business Logic.
            while( iTempNum != 0 )
            {

                iDigit = iTempNum % 10;

                if( iDigit == iTempDig )
                {

                    iCountFreq++;

                }

                iTempNum = iTempNum / 10;

            }

            return iCountFreq;

        } // End of CalcDigitFreq()

};  //End Of Class CountDigitFreq


/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNumber = 0 , iRet = 0 , iDigit = 0;

    cout << "Enter the number :\t";
    cin >> iNumber;

    cout << "Enter the digit to find its frequency in the entered number :\t";
    cin >> iDigit;

    //  Input Validation.
    if( iNumber <= 0 )
    {

        cout << "Error : Please enter the non zero and positive value only.\n";
        return -1;

    } 

    CountDigitFreq cdfobj( iNumber , iDigit );
    iRet = cdfobj.CalcDigitFreq();

    cout << "The frequency of the digit ( " << iDigit << " ) in the number ( " << iNumber << " ) is : " << iRet << " .\n ";

    return 0;

}   // End Of main().

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input No : 12234   Digit : 2   Output : 2
//  Input No : 999     Digit : 9   Output : 3
//  Input No : 123     Digit : 5   Output : 0
//
/////////////////////////////////////////////////////////////////