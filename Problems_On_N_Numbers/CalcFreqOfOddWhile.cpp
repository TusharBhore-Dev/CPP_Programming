/*

    Algorithm

    START
        
        Accept how many element user want to store
        Accept the elements from the user
        check each element from first element
        calculate the frequency of odd number  
        Display the frequency of odd numbers

    STOP

*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class CalcFrequencyOfOddLogic
{

    //  Private Static characteristics of class.
    private :

            int iCnt , *iArr , iSize;

    public :

            CalcFrequencyOfOddLogic( int iSize )
            {

                this -> iSize = iSize;
                this -> iArr = NULL;
                this -> iCnt = 0;

            }//    End Of Parameterized Constructor

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : AcceptElements()
        //  Description :   It is used to accept the n numbers from the user.    
        //  Author :        Tushar Vikas Bhore.
        //  Date :          02/04/2026
        //
        /////////////////////////////////////////////////////////////////

            void AcceptElements()
            {

                //  Memory Allocation for array.
                iArr = ( int * ) malloc ( iSize * sizeof( *iArr ) );

                if( iArr == NULL )
                {

                    cout << "\nError : The application is unable to allocate the memory for the variables.\n";

                    return;

                }

                cout << "\nEnter the elements :\n";

                //  LOGIC TO ACCEPT THE N ELEMENTS
                iCnt = 0;
                while( iCnt < iSize  )
                {

                    cout << "\nEnter the element number "<< iCnt + 1 <<" :\t";

                    cin >> iArr[iCnt];

                    iCnt++;

                }

            }//End Of AcceptElements()

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : CalcFrequencyOfOdd()
        //  Description :   It is used to display the count frequency of odd elements        
        //  Author :        Tushar Vikas Bhore.
        //  Date :          02/04/2026
        //
        /////////////////////////////////////////////////////////////////

            int CalcFrequencyOfOdd()
            {

                int iCountFreq = 0;

                //  Business Logic
                iCnt = 0;
                while( iCnt < iSize )
                {

                    //  condition to check the element is odd or not
                    if( ( iArr[ iCnt ] % 2 ) != 0 )
                    {

                        iCountFreq++;

                    }

                    iCnt++;

                }

                return iCountFreq;

            }   // End of CalcFrequencyOfOdd
    

            //  Destructor to deallocate the resources.
            ~ CalcFrequencyOfOddLogic()
            {

                free( iArr );

            }// End Of Destructor.

};//   End Of Class CalcFrequencyOfOddLogic


        /////////////////////////////////////////////////////////////////
        //
        //  Entry point function for the application
        //
        /////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0 , iRet = 0;

    cout << "Enter how many elements you want to store :\t";
    cin >> iSize;

    //  input validation
    if( iSize <= 0 )
    {

        cout << "\nError : Please enter the valid input range.\n";

        return -1;

    }

    CalcFrequencyOfOddLogic cfoolobj( iSize );

    cfoolobj.AcceptElements();

    iRet = cfoolobj.CalcFrequencyOfOdd();

    cout << "\nThe frequency of the odd number is : "<< iRet << " .\n";

} // End of main


/////////////////////////////////////////////////////////////////
//
//  Testcase succesfully handaled by the application
//
//  TestCase 1 : 
//
//   Enter how many elements you want to store :     10
//   Enter the elements :
//
//   Enter the element number 1 : 52
//
//   Enter the element number 2 : 25
//
//   Enter the element number 3 : 46
//
//   Enter the element number 4 : 84
//
//   Enter the element number 5 : 58
//
//   Enter the element number 6 : 85
//
//   Enter the element number 7 : 95
//
//   Enter the element number 8 : 69
//
//   Enter the element number 9 : 56
//
//   Enter the element number 10 : 85
//
//   The frequency of the odd numbers is : 5.
//
//  TestCase 2 :
//  
//  Enter how many elements you want to store :     -6
//  Error : Please enter the valid input range.
//
/////////////////////////////////////////////////////////////////

