/*

    Algorithm

        START

            Initialize three integer variables iNumOne, iNumSec, and iAns
            Assign value 2 to iNumOne
            Assign value 9 to iNumSec
            Perform Multiplication of iNumOne & iNumSec and store in iAns
            Display the result of multiplication on screen using cout
            Return 0 to indicate successful execution
        
        STOP

*/

/////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNumOne = 0;                                
    int iNumSec = 0;                                

    int iAns = 0;                                   

    iNumOne = 2;                                  
    iNumSec = 9;                                    

    iAns = iNumOne * iNumSec;                       // Business Logic

    cout<<"The multiplication of "<<iNumOne<<" and "<<iNumSec<<" is :  "<<iAns<<".";

    return 0;                                      

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Static (2, 9)        Output : 18
//
/////////////////////////////////////////////////////////////////