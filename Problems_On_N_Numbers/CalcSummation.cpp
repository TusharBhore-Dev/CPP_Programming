/*

    Algorithm

    START
        
        Accept how many element user want to store
        Accept the elements from the user
        add each element from first element to last
        Display the summation of all the elements

    STOP

*/

        /////////////////////////////////////////////////////////////////
        // 
        //  Required Header files
        //
        /////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class CalcSummationLogic
{

    private :

            int *iArr , iCnt , iSize;

    public :

            CalcSummationLogic( int iSize )
            {

                this -> iArr = NULL;
                this -> iCnt = 0;
                this -> iSize = iSize;

            }// End Of Parameterized Constructor

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
                for( iCnt = 0; iCnt < iSize; iCnt++ )
                {

                    cout << "\nEnter the element number "<< iCnt + 1 <<" :\t";

                    cin >> iArr[iCnt];

                }

            }//End Of AcceptElements()

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : CalcSummation
        //  Description :   It is used to display the summation of all      
        //  Author :        Tushar Vikas Bhore.
        //  Date :          02/04/2026
        //
        /////////////////////////////////////////////////////////////////

            int CalcSummation( )
            {

                int iSum = 0;

                //  Business Logic.
                for( iCnt = 0; iCnt < iSize; iCnt++ )
                {

                    iSum = iSum + iArr[ iCnt ];

                }

                return iSum;

            } // End of CalcSummation


            //  Destructor to deallocate the resources
            ~CalcSummationLogic()
            {

                free( iArr );

            }// End Of Destructor

};//    End Of Class CalcSummation


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

    CalcSummationLogic cslobj( iSize );

    cslobj.AcceptElements();

    iRet = cslobj.CalcSummation();

    cout << "The summation of all the entered elements is : "<< iRet <<" .\n";

    return 0;

} // End of main


/////////////////////////////////////////////////////////////////
//
//  Testcase succesfully handaled by the application
//
//      TestCase  : 1
//      Enter how many elements you want to store :     7
//
//
//      Enter the elements :
//      Enter the number 1 :    10
//
//      Enter the number 2 :    50
//
//      Enter the number 3 :    62
//
//      Enter the number 4 :    62
//
//      Enter the number 5 :    51
//
//      Enter the number 6 :    51
//
//      Enter the number 7 :    21
//      The summation of all the entered elements is : 307.
//
//      
//      TestCase : 2
//    
//      Enter how many elements you want to store :     -5
//
//      Error : Please provide the valid input.( Positive Only )
//
//      TestCase : 3
// 
//      Enter how many elements you want to store :     5
//
//
//      Enter the elements :
//      Enter the number 1 :    1
//
//      Enter the number 2 :    2
//
//      Enter the number 3 :    3
//
//      Enter the number 4 :    5
//
//      Enter the number 5 :    5
//      The summation of all the entered elements is : 16.
//
//
/////////////////////////////////////////////////////////////////
