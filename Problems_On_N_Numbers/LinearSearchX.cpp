/*

    Algorithm

    START
        
        Accept how many element user want to store
        Accept the element to search in list
        Accept the elements from the user
        check each element from first element
        if the element is present display present   
        if not present then display not present

    STOP

*/

        /////////////////////////////////////////////////////////////////
        // 
        //  Required Header files
        //
        /////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class LinearSearchLogic
{

    private :

        int iCnt , *iArr , iSize;

    public :

            LinearSearchLogic( int iSize )
            {

                this -> iSize = iSize;
                this -> iArr = NULL;
                this -> iCnt = 0;

            }// End Of Parameterized 

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
        //  Function Name : LinearSearch()
        //  Description :   It is used to search the element is present or not       
        //  Author :        Tushar Vikas Bhore.
        //  Date :          02/04/2026
        //
        /////////////////////////////////////////////////////////////////

            bool LinearSearch( int iTrgt )
            {

                int iCnt = 0;
                for( iCnt = 0; iCnt < iSize; iCnt++ )
                {

                    if( iArr[ iCnt ] == iTrgt )
                    {

                        break;

                    }

                }

                return( iCnt != iSize );

            } // End of LinearSearch()

            //  Destructor to deallocate the resources.
            ~ LinearSearchLogic()
            {

                free( iArr );

            }// End Of Destrutor


};//   End Of Class LinearSearchLogic



        /////////////////////////////////////////////////////////////////
        //
        //  Entry point function for the application
        //
        /////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0 , iTarget = 0;
    bool bRet = false;

    cout << "Enter how many elements you want to store :\t" ;
    cin >> iSize;

    if( iSize <= 0 )
    {

        cout << "Error : Please enter the valid limit.( Positive only )\n" ;

        return -1;

    }

    cout << "\nEnter the number to search is it entered in list or not : ";
    cin >> iTarget;

    LinearSearchLogic lslobj( iSize );

    lslobj.AcceptElements();
    bRet = lslobj.LinearSearch( iTarget );

    if( bRet == true )
    {

        cout << "\nThe entered number is " << iTarget << " and it is present in the entered list.\n" ;

    }
    else
    {

        cout << "\nThe entered number is " << iTarget << " and it is not present in the entered list.\n";

    }

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcase succesfully handaled by the application
//
//  TestCase  : 1
//       
//  Enter how many elements you want to store :     6
//
//  Enter the number to search is it entered in list or not : 11
//  Enter the elements :
//
//  Enter the element number 1 :11
//  Enter the element number 2 :21
//  Enter the element number 3 :51
//  Enter the element number 4 :101
//  Enter the element number 5 :201
//  Enter the element number 6 :156
//
//  The entered number is 11 and it is present in the entered list.
//
//  TestCase : 2 
//
//  Enter how many elements you want to store :     -8
//  Error : Please enter the valid limit.( Positive only )
//
//  TestCase : 3
//  
//  Enter how many elements you want to store :     6
//
//  Enter the number to search is it entered in list or not : 11
//  Enter the elements :
//
//  Enter the element number 1 :2
//  Enter the element number 2 :
//  5
//  Enter the element number 3 :5
//  Enter the element number 4 :6
//  Enter the element number 5 :8
//  Enter the element number 6 :65
//
//  The entered number is 11 and it is not present in the entered list.
//
/////////////////////////////////////////////////////////////////

