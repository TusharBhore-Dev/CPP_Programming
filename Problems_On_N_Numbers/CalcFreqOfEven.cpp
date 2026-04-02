/*

    Algorithm

    START
        
        Accept how many element user want to store
        Accept the elements from the user
        check each element from first element
        calculate the frequency of even number  
        Display the frequency of even numbers

    STOP

*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class CalcFrequencyOfEvenLogic
{

    //  Private Static characteristics of class.
    private :

            int iCnt , *iArr , iSize;

    public :

            CalcFrequencyOfEvenLogic( int iSize )
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
                for( iCnt = 0; iCnt < iSize; iCnt++ )
                {

                    cout << "\nEnter the element number "<< iCnt + 1 <<" :\t";

                    cin >> iArr[iCnt];

                }

            }//End Of AcceptElements()

        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : CalcFrequencyOfEven()
        //  Description :   It is used to display the count frequency of even        
        //  Author :        Tushar Vikas Bhore.
        //  Date :          02/04/2026
        //
        /////////////////////////////////////////////////////////////////

            int CalcFrequencyOfEven()
            {

                int iCountFreq = 0;

                //  Business Logic
                for( iCnt = 0; iCnt < iSize; iCnt++ )
                {

                    //  condition to check the element is even or not
                    if( ( iArr[ iCnt ] % 2 ) == 0 )
                    {

                        iCountFreq++;

                    }

                }

                return iCountFreq;

            }   // End of CalcFrequencyOfEven
    

            //  Destructor to deallocate the resources.
            ~ CalcFrequencyOfEvenLogic()
            {

                free( iArr );

            }// End Of Destructor.

};//   End Of Class CalcFrequencyOfEvenLogic

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

    CalcFrequencyOfEvenLogic cfoelobj( iSize );

    cfoelobj.AcceptElements();

    iRet = cfoelobj.CalcFrequencyOfEven();

    cout << "\nThe frequency of the even number is : "<< iRet << " .\n";

} // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcase succesfully handaled by the application
//
//  TestCase 1 : 
//
//        Enter how many elements you want to store :     7
//        Enter the elements :
//
//        Enter the element number 1 : 15
//
//        Enter the element number 2 : 45
//
//        Enter the element number 3 : 85
//
//        Enter the element number 4 : 79
//
//        Enter the element number 5 : 84
//
//        Enter the element number 6 : 56
//
//        Enter the element number 7 : 78
//
//        The frequency of the even number is : 3.
//
//  TestCase 2 :
//      
//      Enter how many elements you want to store :     -5
//      Error : Please enter the valid input range.
//
//  TestCase 3 :
// 
//      Enter how many elements you want to store :     5
//      Enter the elements :
//
//      Enter the element number 1 : 10
//
//      Enter the element number 2 : 50
//
//      Enter the element number 3 : 865
//
//      Enter the element number 4 : 85
//
//      Enter the element number 5 : 56
//
//      The frequency of the even number is : 3.
//
/////////////////////////////////////////////////////////////////

