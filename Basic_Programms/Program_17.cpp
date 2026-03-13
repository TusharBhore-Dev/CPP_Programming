/*
    Algorithm

    START
        Accept first float number from user as fNumOne
        Accept second float number from user as fNumTwo
        Pass these numbers to Division function
        Inside Division function:
            Check if denominator (fNo2) is zero
                If yes, print error message (Undefined)
            Check if numerator (fNo1) is zero
                If yes, return 0.0f
            Otherwise, perform float division (fNo1 / fNo2)
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
//  Description :   Calculates division of two floats with validation
//  Input :         Float, Float
//  Output :        Float
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

float Division( float fNo1 , float fNo2 )
{

    if( fNo2 == 0.0f )
    {

        printf("The division by zero denominator is undefined.\n");
        return -1.0f; // Return error code to satisfy return type

    }
    else if( fNo1 == 0.0f )
    {

        return 0.0f;

    }
    else
    {

        float fAns = 0.0f;

        fAns = fNo1 / fNo2;

        return fAns;

    }

}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    float fNumOne = 0.0f , fNumTwo = 0.0f , fRetVal = 0.0f;

    cout<<"Enter the first number :\t";
    cin>>fNumOne;

    cout<<"Enter the second number :\t";
    cin>>fNumTwo;

    fRetVal = Division( fNumOne , fNumTwo );

    // Print result only if denominator was not zero
    if( fNumTwo != 0.0f )
    {

        cout<<"The division of "<<fNumOne<<" and "<<fNumTwo<<" is : "<<fRetVal<<".\n";

    }

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10.0f       Input2 : 4.0f        Output : 2.5
//  Input1 : 5.0f        Input2 : 0.0f        Output : Undefined
//  Input1 : 0.0f        Input2 : 8.0f        Output : 0.0
//
/////////////////////////////////////////////////////////////////