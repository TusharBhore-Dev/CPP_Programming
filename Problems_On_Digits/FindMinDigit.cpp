/*
    Algorithm

    START
        Accept number as iNum
        Initialize iMinDigit to 9 (highest possible digit)
        Iterate until iNum becomes zero
        Extract the last digit using modulo 10
        Compare extracted digit with iMinDigit
        If extracted digit is smaller, update iMinDigit
        Divide iNum by 10 to move to the next digit
        Return iMinDigit
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class FindMinDigit
{

    private :

        int iNum;

    public :

        FindMinDigit( int iNum )
        {

            this -> iNum = iNum;

        }// End of parameterized constructor.

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : FindMinDigit
        //  Description :   It is used to find the smallest digit in a given number         
        //  Author :        Tushar vikas bhore
        //  Date :          29/03/2026
        //
        /////////////////////////////////////////////////////////////////

        //  The function is const it not changes the values.
        int GetMinDigit()   const
        {

            int iMinDigit = 9 , iDigit = 0 , iTempNum = 0;

            iTempNum = iNum;

            //  Business logic
            while( iTempNum != 0 )
            {

                iDigit = iTempNum % 10;

                if( iDigit < iMinDigit )
                {

                    iMinDigit = iDigit;

                }

                iTempNum = iTempNum / 10;

            }

            return iMinDigit;

        }   //End of getMinDigit()

};  //  End of class FindMinDigit


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

    FindMinDigit fmdobj( iNumber );
    iRet = fmdobj.GetMinDigit();

    cout << "The smallest digit in the number " << iNumber << " is : " << iRet << " .\n ";

    return 0;

}// End OfMain()



/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//      TestCase 1 :
//
//          Enter the number :      125985
//          The smallest digit in the number 125985 is : 1 .
//
//      TestCase 2 :
//
//          Enter the number :      -5
//          Error : Please enter the non zero and positive value only.
//
//      TestCase 3 :
//          
//          Enter the number :      5649
//          The smallest digit in the number 5649 is : 4 .
//
//
/////////////////////////////////////////////////////////////////