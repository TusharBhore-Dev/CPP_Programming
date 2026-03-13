/*

    Algorithm

        START

            Initialize three integer variables iNumOne, iNumSec, and iAns
            Assign value 18 to iNumOne
            Assign value 9 to iNumSec
            Perform Division of iNumOne by iNumSec and store in iAns
            Display the result of division on screen using cout
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
    iNumSec = 9;                                    

    iAns = iNumOne / iNumSec;      

    cout<<"The division of "<<iNumOne<<" and "<<iNumSec<<" is :  "<<iAns<<".";

    return 0;                                    

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Static (18, 9)        Output : 2
//
/////////////////////////////////////////////////////////////////