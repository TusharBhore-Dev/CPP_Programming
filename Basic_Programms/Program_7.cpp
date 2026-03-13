/*
    Algorithm

    START
        Accept first integer from user as iNumOne
        Accept second integer from user as iNumTwo
        Pass these numbers to Addition function
        Inside Addition function:
            If number is negative, convert it to positive (Absolute value)
            Perform addition of the two numbers
            Return the result
        Display the result of addition in main
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header Files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

/////////////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Description :   Calculates addition of two absolute integers
//  Input :         Integer, Integer
//  Output :        Integer
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

int Addition( int iNo1 , int iNo2 )
{

    if( iNo1 < 0 )
    {

        iNo1 = -iNo1;

    }

    if( iNo2 < 0 )
    {

        iNo2 = -iNo2;

    }

    int iAns = 0;

    iAns = iNo1 + iNo2;

    return iAns;

}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iNumOne = 0;
    int iNumTwo = 0;
    
    int iRetVal = 0;

    cout<<"Enter the first number : \t";
    cin>>iNumOne;

    cout<<"Enter the second number : \t";
    cin>>iNumTwo;

    iRetVal = Addition( iNumOne , iNumTwo );

    cout<<"The addition of "<<iNumOne<<" and "<<iNumTwo<<" is : "<<iRetVal<<".\n";

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10          Input2 : 20          Output : 30
//  Input1 : -5          Input2 : 15          Output : 20 (Absolute)
//  Input1 : -10         Input2 : -20         Output : 30 (Absolute)
//
/////////////////////////////////////////////////////////////////