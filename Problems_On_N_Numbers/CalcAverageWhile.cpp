/*

    Algorithm

    START
        
        Accept how many element user want to store
        Accept the elements from the user
        Add all the elements and divide the sum by total elements
        Display the average

    STOP

*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class CalcAverageLogic
{

    //  Private static characteristics of the class.
    private:

            int iSize ;
            int iCnt ;
            int *iArr;

    public:

            // Parameterized Constructor
            CalcAverageLogic( int iSize )
            {

                this -> iSize = iSize;
                this -> iCnt = 0; 
                this -> iArr = NULL;

            }// End of parameterizes constructor

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : AcceptElements()
        //  Description :   It is used to accept the n numbers from the user.    
        //  Author :        Tushar Vikas Bhore.
        //  Date :          01/04/2026
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
                while( iCnt < iSize )
                {

                    cout << "\nEnter the element number "<< iCnt + 1 <<" :\t";

                    cin >> iArr[iCnt];

                    iCnt++;

                }


            }//End Of AcceptElements()

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : CalcSummation()
        //  Description :   It is used to calculate the sum of all elements.    
        //  Author :        Tushar Vikas Bhore.
        //  Date :          02/04/2026
        //
        /////////////////////////////////////////////////////////////////

            int CalcSummation() 
            {

                int iSum = 0;

                //  Business Logic
                iCnt = 0;
                while( iCnt < iSize )
                {

                    iSum = iSum + iArr[ iCnt ];

                    iCnt++;

                }

                return iSum;

            }   // End of CalcSummation

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : CalcAverage()
        //  Description :   It is used to calculate the average of all elements.    
        //  Author :        Tushar Vikas Bhore.
        //  Date :          02/04/2026
        //
        /////////////////////////////////////////////////////////////////

            float CalcAverage()
            {

                int iSumOfTotalEle = 0;
                float fAverage = 0.0f;

                //Business Logic.

                iSumOfTotalEle = CalcSummation();
                
                fAverage = iSumOfTotalEle / iSize;

                return fAverage;

            }// End Of CalcAverage()

            ~ CalcAverageLogic()
            {

                free( iArr );

            }// End Of Destructor.

};//        End Of Class CalcAverageLogic

        /////////////////////////////////////////////////////////////////
        //
        //  Entry point function for the application
        //
        /////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0;

    float fRet = 0;

    cout << "Enter how many elements you want to store :\t";
    cin >> iSize;

    //  input validation
    if( iSize <= 0 )
    {

        cout << "\nError : Please enter the valid input range.\n";

        return -1;

    }

    CalcAverageLogic cobj( iSize );

    cobj.AcceptElements();
    
    fRet = cobj.CalcAverage();

    cout << "\nThe Average of the numbers is : " << fRet <<" .\n";

    return 0;

}// End Of Main()

/////////////////////////////////////////////////////////////////
//
//  Testcase succesfully handaled by the application
//
//  TestCase 1 : 
                    // Enter how many elements you want to store :     5

                    // Enter the elements :

                    // Enter the element number 1 :    1010

                    // Enter the element number 2 :    10

                    // Enter the element number 3 :
                    // 1010

                    // Enter the element number 4 :    1010

                    // Enter the element number 5 :    101

                    // The Average of the numbers is : 628 .

//  TestCase 2 : 
                    // Enter how many elements you want to store :     3

                    // Enter the elements :

                    // Enter the element number 1 :    30

                    // Enter the element number 2 :    30

                    // Enter the element number 3 :    30

                    // The Average of the numbers is : 30 .

/////////////////////////////////////////////////////////////////

