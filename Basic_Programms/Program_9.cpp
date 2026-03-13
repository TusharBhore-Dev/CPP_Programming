/*
    Algorithm

    START
        Accept first float number from user as fNumOne
        Accept second float number from user as fNumTwo
        Pass these numbers to Addition function
        Inside Addition function:
            If number is negative, convert it to positive (Absolute value)
            Perform addition of the two float numbers
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
//  Description :   Calculates addition of two absolute floats
//  Input :         Float, Float
//  Output :        Float
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

float Addition( float fNo1 , float fNo2 )
{

    if( fNo1 < 0 )
    {

        fNo1 = -fNo1;

    }

    if( fNo2 < 0 )
    {

        fNo2 = -fNo2;

    }

    float fAns = 0.0f;

    fAns = fNo1 + fNo2;

    return fAns;

}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    float fNumOne = 0.0f;
    float fNumTwo = 0.0f;
    
    float fRetVal = 0.0f;

    cout<<"Enter the first number(float) : \t";
    cin>>fNumOne;

    cout<<"Enter the second number(float) : \t";
    cin>>fNumTwo;

    fRetVal = Addition( fNumOne , fNumTwo );

    cout<<"The addition of "<<fNumOne<<" and "<<fNumTwo<<" is : "<<fRetVal<<".\n";

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10.2f       Input2 : 5.8f        Output : 16.0
//  Input1 : -4.5f       Input2 : 2.5f        Output : 7.0 (Absolute)
//  Input1 : -1.0f       Input2 : -1.0f       Output : 2.0 (Absolute)
//
/////////////////////////////////////////////////////////////////