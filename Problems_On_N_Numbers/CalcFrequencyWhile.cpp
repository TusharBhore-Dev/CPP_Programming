/*

    Algorithm

        START
            
            Accept how many element user want to store
            Accept the elements from the user
            Accept the number to count its frequency
            check each element from first element
            calculate the frequency of entered number  
            Display the frequency of that element

        STOP

*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class CalcFrequencyLogic
{

    private :

        int iSize , iCnt , *iArr;

    public :

            CalcFrequencyLogic( int iSize )
            {

                this -> iSize = iSize;
                this -> iCnt = 0;
                this -> iArr = NULL;

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
        //  Function Name : CalcFrequency()
        //  Description :   It is used to calculate the frequency of number        
        //  Author :        Tushar Vikas Bhore.
        //  Date :          02/04/2026
        //
        /////////////////////////////////////////////////////////////////

            int CalcFrequency( int iTrgt )
            {

                int iCnt = 0 , iFreq = 0;

                //  Business Logic.
                
                iCnt = 0;
                while( iCnt < iSize )
                {

                    if( iArr[ iCnt ] == iTrgt )
                    {

                        iFreq++;

                    }

                    iCnt++;

                }

                return iFreq;

            }   // End of CalcFrequency

            //  Destructor to deallocate the resources.
            ~ CalcFrequencyLogic()
            {

                free( iArr );

            }//     End Of Destructor

};


        /////////////////////////////////////////////////////////////////
        //
        //  Entry point function for the application
        //
        /////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0 , iRet = 0 , iTrgt = 0;

    cout << "Enter how many elements you want to store :\t";

    cin >> iSize;
 
    //  input validation
    if( iSize <= 0 )
    {

        cout << "\nError : Please enter the valid input range.\n";

        return -1;

    }
 
 
    cout << "\nEnter the number to find its frequency :\t";

    cin >> iTrgt;
    
    //  input validation
    if( iTrgt <= 0 )
    {

        cout << "\nError : Please enter the valid element to find the frequency.\n";

        return -1;

    }

    CalcFrequencyLogic cflobj( iSize );

    cflobj.AcceptElements();
    
    iRet = cflobj.CalcFrequency( iTrgt );
 
    cout << "\nThe frequency of the number "<< iTrgt <<" is : " << iRet << " .\n";

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Testcase succesfully handaled by the application
//
//      TestCase  : 1
//      
//
//      Enter how many elements you want to store :     10
//      Enter the number to find its frequency :        21
//      Enter the elements :
//
//      Enter the element number 1 : 11
//
//      Enter the element number 2 : 21
//
//      Enter the element number 3 : 51
//
//      Enter the element number 4 : 12
//
//      Enter the element number 5 : 21
//
//      Enter the element number 6 : 21
//
//      Enter the element number 7 : 101
//
//      Enter the element number 8 : 141
//
//      Enter the element number 9 : 21
//
//      Enter the element number 10 : 12
//      The frequency of the number 21 is : 4.
//
//      
//      TestCase : 2
//    
//      Enter how many elements you want to store :     5
//      Enter the number to find its frequency :        3
//      Enter the elements :
//
//      Enter the element number 1 : 45
//
//      Enter the element number 2 : 5
//
//      Enter the element number 3 : 5
//
//      Enter the element number 4 : 5
//
//      Enter the element number 5 : 55
//
//      The frequency of the number 3 is : 0.
//
/////////////////////////////////////////////////////////////////

