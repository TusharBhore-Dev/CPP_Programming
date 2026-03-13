/*

    Algorithm

        START
    
            Initialize three integer variables iNumOne, iNumSec, and iAns
            Assign value 10 to iNumOne
            Assign value 11 to iNumSec
            Perform Addition of iNumOne & iNumSec and store in iAns
            Display the result of addition on screen using cout
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

    iNumOne = 10;                                   
    iNumSec = 11;                                   

    iAns = iNumOne + iNumSec;                       

    cout<<"The addition of "<<iNumOne<<" and "<<iNumSec<<" is :  "<<iAns<<".";

    return 0;                                      

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Static (10, 11)        Output : 21
//
/////////////////////////////////////////////////////////////////