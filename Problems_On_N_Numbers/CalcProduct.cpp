/*

    Algorithm

    START
        
        Accept how many element user want to store
        Accept the elements from the user
        multiply each element from  list
        Display the product of all the elements

    STOP

*/

        /////////////////////////////////////////////////////////////////
        // 
        //  Required Header files
        //
        /////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class CalcProductLogic
{

    private :

            int iSize , *iArr , iCnt ;

    public :

            CalcProductLogic( int iSize )
            {

                this -> iSize = iSize;
                this -> iArr = NULL;
                this -> iCnt = 0;

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
        //  Function Name : CalcProductOfAllEle()
        //  Description :   It is used to display the product of all      
        //  Author :        Tushar Vikas Bhore.
        //  Date :          02/04/2026
        //
        /////////////////////////////////////////////////////////////////

            double CalcProductOfAllEle()
            {

                int iCnt = 0;
                double dProduct = 1.0;

                for( iCnt = 0; iCnt < iSize; iCnt++ )
                {

                    dProduct = dProduct * ( iArr[ iCnt ] );

                }

                return dProduct;

            }   // End of CalcProductOfAllEle

            //      Destructor to deallocate the resources.
            ~ CalcProductLogic()
            {

                free( iArr );

            }// End Of Destructor


};// End Of Class CalcProductLogic

        /////////////////////////////////////////////////////////////////
        //
        //  Entry point function for the application
        //
        /////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0 ;
    double dRet = 0;

    cout << "Enter how many elements you want to store :\t";
    cin >> iSize;

    //  input validation
    if( iSize <= 0 )
    {

        cout << "\nError : Please enter the valid input range.\n";

        return -1;

    }

    CalcProductLogic cplobj( iSize );

    cplobj.AcceptElements();

    dRet = cplobj.CalcProductOfAllEle();

    cout << "The product of all elements is : "<< dRet << " .\n";
 
    return 0;

}// End of main


/////////////////////////////////////////////////////////////////
//
//  Testcase succesfully handaled by the application
//
//      TestCase  : 1
//      Enter how many elements you want to store :     5
//
//      Enter the elements :
//
//      Enter the number 1 : 10
//
//      Enter the number 2 : 20
//
//      Enter the number 3 : 30
//
//      Enter the number 4 : 40
//
//      Enter the number 5 : 50
//      The product of all elements is : 12000000.000000.
//
//
//       TestCase : 2 
//      Enter how many elements you want to store :     -5
//      Error : Please provide the valid limit.
//
//      TestCase : 3
//      Enter how many elements you want to store :     5
//
//      Enter the elements :
//
//      Enter the number 1 : 4
//
//      Enter the number 2 : 2
//
//      Enter the number 3 : 3
//
//      Enter the number 4 : 51
//
//      Enter the number 5 : 64
//      The product of all elements is : 78336.000000.
/////////////////////////////////////////////////////////////////
