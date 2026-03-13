/*
    Algorithm

    START
        Accept first float number from user as fNumOne
        Accept second float number from user as fNumTwo
        Pass these numbers to Multiplication function
        Inside Multiplication function:
            Perform multiplication (fNo1 * fNo2)
            Return the result
        Display the result of multiplication in main
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
//  Function Name : Multiplication
//  Description :   Calculates multiplication of two float numbers
//  Input :         Float, Float
//  Output :        Float
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

float Multiplication( float fNo1 , float fNo2 )
{

    float fAns = 0.0f;

    fAns = fNo1 * fNo2;

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

    fRetVal = Multiplication( fNumOne , fNumTwo );

    cout<<"The multiplication of "<<fNumOne<<" and "<<fNumTwo<<" is : "<<fRetVal<<".\n";

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 1.5         Input2 : 2.0         Output : 3.0
//  Input1 : -2.5        Input2 : 4.0         Output : -10.0
//  Input1 : 0.5         Input2 : 0.5         Output : 0.25
//
/////////////////////////////////////////////////////////////////