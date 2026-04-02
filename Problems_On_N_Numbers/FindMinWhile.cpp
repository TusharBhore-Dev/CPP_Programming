/*
    Algorithm

    START
        Accept how many element user want to store
        Accept the elements from the user
        check each element from first element
        Strore the minimum element 
        Display the min element
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;


class FindMinLogic
{

    private :

            int iCnt = 0, *iArr , iSize;

    public :

            FindMinLogic( int iSize )
            {

                this -> iCnt = 0;
                this -> iArr = NULL;
                this -> iSize = iSize;

            }//End Of Constructor.

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
        //  Function Name : FindMiniMumElement()
        //  Description :   It is used to display the minimum element of array         
        //  Author :        Tushar Vikas Bhore.
        //  Date :          02/04/2026
        //
        /////////////////////////////////////////////////////////////////

            int FindMiniMumElement( )
            {

                int iMin = 9;

                iMin = iArr[0];

                //  Counter will start from second element
                
                iCnt = 1;
                while( iCnt < iSize )
                {

                    if( iMin > iArr[ iCnt ] )
                    {

                        iMin = iArr[ iCnt ];

                    }

                    iCnt++;

                }

                return iMin;

            }   // End of FindMiniMumElement


};//    End Of Class FindMinLogic

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

        cout << "Error : Please enter the positive and non zero limit only.\n";
        return -1;

    }

    FindMinLogic fmlobj( iSize );

    fmlobj.AcceptElements();

    iRet = fmlobj.FindMiniMumElement();

    cout << "The minimum element is : " << iRet << ".\n";

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcase succesfully handaled by the application
//      
//      Enter how many elements you want to store : 5
//      Enter the elements :
//
//
//      Enter the element number 1 : 10 
//      Enter the element number 2 : 20
//      Enter the element number 3 : 30 
//      Enter the element number 4 : 40
//      Enter the element number 5 : 50
//
//      The minimum element is : 10.
//  
/////////////////////////////////////////////////////////////////
