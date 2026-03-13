/*
    Algorithm

    START
        Accept first integer from user as iNumOne
        Accept second integer from user as iNumTwo
        Pass these numbers to Division function
        Inside Division function:
            Check if denominator (iNo2) is zero
                If yes, print error message (Undefined)
            Check if numerator (iNo1) is zero
                If yes, return 0
            Otherwise, perform integer division (iNo1 / iNo2)
            Return the result
        Display the result of division in main
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header Files
//
/////////////////////////////////////////////////////////////////

#include<iostream>
#include<stdio.h>

using namespace std;

/////////////////////////////////////////////////////////////////
//
//  Function Name : Division
//  Description :   Calculates division of two integers with validation
//  Input :         Integer, Integer
//  Output :        Integer
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

int Division( int iNo1 , int iNo2 )
{

    if( iNo2 == 0 )
    {

        printf("The division by zero denominator is undefined.\n");
        return -1; // Added return to ensure function returns a value

    }
    else if( iNo1 == 0 )
    {

        return 0;

    }
    else
    {

        int iAns = 0;

        iAns = iNo1 / iNo2;

        return iAns;

    }

}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNumOne = 0 , iNumTwo = 0 , iRetVal = 0;

    cout<<"Enter the first number :\t";
    cin>>iNumOne;

    cout<<"Enter the second number :\t";
    cin>>iNumTwo;

    iRetVal = Division( iNumOne , iNumTwo );

    if( iNumTwo != 0 )
    {
        cout<<"The division of "<<iNumOne<<" and "<<iNumTwo<<" is : "<<iRetVal<<".\n";
    }

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10          Input2 : 2           Output : 5
//  Input1 : 10          Input2 : 0           Output : Undefined
//  Input1 : 0           Input2 : 5           Output : 0
//
/////////////////////////////////////////////////////////////////