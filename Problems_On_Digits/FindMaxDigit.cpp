/*
    Algorithm

    START
        Accept number as iNum
        Initialize iMaxDigit to 0
        Iterate until iNum becomes zero
        Extract the last digit using modulo 10
        Compare extracted digit with iMaxDigit
        If extracted digit is greater, update iMaxDigit
        Divide iNum by 10 to move to the next digit
        Return iMaxDigit
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class FindMaxDigit
{

    private :

        int iNum;

    public :

        FindMaxDigit( int iNum )
        { 

            this -> iNum = iNum;

        }//End of parameterized constructor

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : GetMaxDigit()
        //  Description :   It is used to find the largest digit in a given number         
        //  Author :        Tushar vikas bhore
        //  Date :          29/03/2026
        //
        /////////////////////////////////////////////////////////////////

        int GetMaxDigit()   const
        {
                
            int iMaxDigit = 0 , iDigit = 0 , iTempNum = 0;
            iTempNum = iNum;

            //  Business Logic.
            while( iTempNum != 0 )
            {

                iDigit = iTempNum % 10;

                if( iDigit > iMaxDigit )
                {

                    iMaxDigit = iDigit;

                }

                iTempNum = iTempNum / 10;

            }

            return iMaxDigit;

        }   //  End Of  GetMaxDigit()

};  //  End Of Class FindMaxDigit

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNumber = 0 , iRet = 0 ;

    cout << "Enter the number :\t" ;
    cin >> iNumber;

    //Input Validation
    if( iNumber <= 0 )
    {

        cout << "Error : Please enter the non zero and positive value only.\n" ;
        return -1;

    } 

    FindMaxDigit fmdobj( iNumber );
    iRet = fmdobj.GetMaxDigit();

    cout << "The largest digit in the number " << iNumber << " is : " << iRet << " .\n ";

    return 0;

}// End OfMain()


/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//      TestCase 1 :
//
//          Enter the number :      125985
//          The largest digit in the number 125985 is : 9 .
//
//      TestCase 2 :
//
//          Enter the number :      -5
//          Error : Please enter the non zero and positive value only.
//
//      TestCase 3 :
//          
//          Enter the number :      5649
//          The largest digit in the number 5649 is : 9 .
//
//
/////////////////////////////////////////////////////////////////