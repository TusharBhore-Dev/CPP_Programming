/*

    Algorithm

        START
          
            Initialize three integer variables iNumOne, iNumSec, and iAns
            Assign value 18 to iNumOne
            Assign value 4 to iNumSec
            Perform Modulo operation (Remainder) of iNumOne by iNumSec and store in iAns
            Display the result of the remainder on screen using cout
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

    iNumOne = 18;                                   
    iNumSec = 4;                                    

    iAns = iNumOne % iNumSec;                       // Business Logic (Modulo)

    cout<<"The remainder of the division of the "<<iNumOne<<" and "<<iNumSec<<" is :  "<<iAns<<".";

    return 0;                                       

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Static (18, 4)        Output : 2
//
/////////////////////////////////////////////////////////////////