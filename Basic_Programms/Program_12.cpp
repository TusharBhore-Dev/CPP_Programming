/*
    Algorithm

    START
        Accept first float number from user as fNumOne
        Accept second float number from user as fNumTwo
        Pass these numbers to Substraction function
        Inside Substraction function:
            If fNo1 is negative, convert it to positive (Absolute value)
            If fNo2 is negative, convert it to positive (Absolute value)
            Perform subtraction: fAns = fNo1 - fNo2
            Return the result
        Display the result of subtraction in main
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
//  Function Name : Substraction
//  Description :   Calculates subtraction of two absolute floats
//  Input :         Float, Float
//  Output :        Float
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

float Substraction( float fNo1 , float fNo2 )
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

    fAns = fNo1 - fNo2;

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

    fRetVal = Substraction( fNumOne , fNumTwo );

    cout<<"The substraction of "<<fNumOne<<" and "<<fNumTwo<<" is : "<<fRetVal<<".\n";

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 15.5        Input2 : 10.2        Output : 5.3
//  Input1 : -20.0       Input2 : 5.0         Output : 15.0 (Absolute)
//  Input1 : 5.5         Input2 : -10.5       Output : -5.0
//
/////////////////////////////////////////////////////////////////