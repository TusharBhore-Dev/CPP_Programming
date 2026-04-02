/*

    Algorithm

    START
        
        Accept how many element user want to store
        Accept the elements from the user
        add one to each element from first to last
        Display the all the elements

    STOP

*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class IncrementElementLogic
{

    private:

            int iCnt , *iArr , iSize ;

    public :

            IncrementElementLogic( int iSize )
            {

                this -> iArr = NULL;
                this -> iCnt = 0;
                this -> iSize = iSize;

            }// End Of Parameterized Constructor.

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
        //  Function Name : DisplayIncrement
        //  Description :   It is used to display the elements by incrementing the value by one         
        //  Author :        Tushar Vikas Bhore.
        //  Date :          02/04/2026
        //
        /////////////////////////////////////////////////////////////////

            void DisplayIncrement()
            {

                cout << "The elements are as follow : \n" ;

                for( iCnt = 0; iCnt < iSize ; iCnt++ )
                {

                    cout << "\nThe number " << iArr[ iCnt ] <<" is incremented as : " << ( iArr[ iCnt ] + 1 )  << " .\n" ;

                }

            }   // End of DisplayIncrement

            //  Destructor to Deallocate the memory.
            ~   IncrementElementLogic()
            {

                free( iArr );

            }// End Of Destructor.


};//    End Of Class IncrementElementLogic

        /////////////////////////////////////////////////////////////////
        //
        //  Entry point function for the application
        //
        /////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0 ;

    cout << "Enter how many elements you want to store :\t";
    cin >> iSize;

    //  Input Validation
    if( iSize <= 0 )
    {

        cout << "Error : Please provide positive value only.\n";

        return -1;

    }

    IncrementElementLogic ielobj( iSize );

    ielobj.AcceptElements();

    ielobj.DisplayIncrement();
    
    return 0;

} // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcase succesfully handaled by the application
//
//  TestCase  : 1
//        
//        Enter how many elements you want to store :     7
//
//        Enter the elements :
//
//        Enter the element number 1 :    10
//
//        Enter the element number 2 :    20
//
//        Enter the element number 3 :    50
//
//        Enter the element number 4 :    100
//
//        Enter the element number 5 :    200
//
//        Enter the element number 6 :    500
//
//        Enter the element number 7 :    1000
//        The elements are as follow :
//        The number 10 is incremented as : 11.
//        The number 20 is incremented as : 21.
//        The number 50 is incremented as : 51.
//        The number 100 is incremented as : 101.
//        The number 200 is incremented as : 201.
//        The number 500 is incremented as : 501.
//        The number 1000 is incremented as : 1001.
//  TestCase : 2
//      
//        Enter how many elements you want to store :     -5
//        Error : Please provide positive value only.

/////////////////////////////////////////////////////////////////

