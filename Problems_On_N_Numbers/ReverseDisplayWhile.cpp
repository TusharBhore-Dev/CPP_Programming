/*

    Algorithm

    START
        
        Accept how many element user want to store
        Accept the elements from the user
        Display the elements in reverse order

    STOP

*/

        /////////////////////////////////////////////////////////////////
        // 
        //  Required Header files
        //
        /////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class ReverseDisplayLogic
{

    private:

            int iCnt , iSize , *iArr;

    public :

            ReverseDisplayLogic( int iSize )
            {

                this -> iArr = NULL;

                this -> iCnt = 0;

                this -> iSize = iSize;

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
                while( iCnt < iSize )
                {

                    cout << "\nEnter the element number "<< iCnt + 1 <<" :\t";

                    cin >> iArr[iCnt];

                    iCnt++;

                }

            }//End Of AcceptElements()


        /////////////////////////////////////////////////////////////////
        //
        //  Function Name : ReverseDisplay()
        //  Description :   It is used to display the elements in reverse order       
        //  Author :        Tushar Vikas Bhore.
        //  Date :          02/04/2026
        //
        /////////////////////////////////////////////////////////////////

            void ReverseDisplay( )
            {

                int iCnt = 0;

                cout<< "The elements of the array in reverse order are as follow : \n\n";
                
                iCnt = ( iSize - 1 );
                while(  iCnt > -1  )
                {

                    cout <<  "\n | " << iArr[ iCnt ]  << " | \n";

                    iCnt--;

                }
                
            }   // End of ReverseDisplay

            ~ ReverseDisplayLogic()
            {

                free( iArr );

            }// End Of Destructor.

};//    End Of Class ReverseDisplayLogic

        /////////////////////////////////////////////////////////////////
        //
        //  Entry point function for the application
        //
        /////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0;

    cout << "Enter how many elements you want to store :\t" ;
    cin >> iSize;

    if( iSize <= 0 )
    {

        cout << "Error : Please provide valid input only.( Positive only )\n";

        return -1;

    }

    ReverseDisplayLogic rdlobj( iSize );
    rdlobj.AcceptElements();
    rdlobj.ReverseDisplay();

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Testcase succesfully handaled by the application
//
//  TestCase  : 1
//      
//    Enter how many elements you want to store :     6
//      Enter the elements :
//
//      Enter the number 1 :    11
//
//      Enter the number 2 :    21
//
//      Enter the number 3 :    51
//
//      Enter the number 4 :    101
//
//      Enter the number 5 :    201
//
//      Enter the number 6 :    301
//      The elements of the array in reverse order are as follow :
//
//      | 301 |
//      | 201 |
//      | 101 |
//      | 51 |
//      | 21 |
//      | 11 |
//
//      TestCase : 2
//      Enter how many elements you want to store :     -5
//      Error : Please provide valid input only.( Positive only )
//
//      TestCase : 3
//      Enter how many elements you want to store :     3
//      Enter the elements :
//
//      Enter the number 1 :    11
//
//      Enter the number 2 :    21
//
//      Enter the number 3 :    50
//      The elements of the array in reverse order are as follow :
//
//      | 50 |
//      | 21 |
//      | 11 |
//
/////////////////////////////////////////////////////////////////

