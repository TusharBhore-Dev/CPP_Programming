/*

    Algorithm

    START
        
        Accept the nymber from the user
        Extract the digits from number by doing % 10 operation
        Display the digit
        Reduce the digit which is displayed by doing /10 operation

    STOP

*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include<iostream>

using namespace std;

class DisplayRevDigs
{

    private:

        int iNum ;
    
    public:

        DisplayRevDigs( int iNumber )
        {

            this->iNum = iNumber;

        } // End of Parameterized constructor;

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : DisplayDigitsRev()
        //  Description :   It is used to display the digits of number in reverse order      
        //  Author :        Tushar Vikas Bhore.
        //  Date :          29/03/2026
        //
        /////////////////////////////////////////////////////////////////

        //  const is used to denote the function is not going to change the static data.
        void DisplayDigitsRev() const
        {

            int iTemp = 0 , iDigit = 0;

            iTemp = iNum;

            cout << "\nThe digits of a number in reverse order are as follow : \n\n";

            while( iTemp != 0 )
            {

                iDigit = iTemp % 10;

                cout<<"\t"<<iDigit<< "\t";
                
                iTemp = iTemp /10;

            }// End of loop

        }   //  End of DisplayDigitRev() 

}; // End of class DisplayRevDigs

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNumber = 0;

    cout << "Enter the number :\t";
    cin >> iNumber;

    //  Input Validation
    if( iNumber <= 0 )
    {

        cout << "Error : Please provide the non zero and positive value only.\n";

        return -1;

    }

    DisplayRevDigs dobj( iNumber );

    dobj.DisplayDigitsRev();

    return 0;

}// End of main.


/////////////////////////////////////////////////////////////////
//
//    Testcase succesfully handaled by the application
//
//      TestCase  : 1
//
//          Enter the number :      0
//          
//          Error : Please provide the non zero and positive value only.
//
//      TestCase : 2
//
//          Enter the number :      5
//
//          The digits of a number in reverse order are as follow :
//
//              5
//      TestCase : 3
//  
//          Enter the number :      -5
//
//          Error : Please provide the non zero and positive value only.
//      
//      TestCase : 4
//
//          The digits of a number in reverse order are as follow :
//
//              7               6               5               4               3               2               1
/////////////////////////////////////////////////////////////////
