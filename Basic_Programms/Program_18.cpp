/*
    Algorithm

    START
        Accept first double number from user as dNumOne
        Accept second double number from user as dNumTwo
        Pass these numbers to Division function
        Inside Division function:
            Check if denominator (dNo2) is zero
                If yes, print error message (Undefined)
            Check if numerator (dNo1) is zero
                If yes, return 0.0
            Otherwise, perform double division (dNo1 / dNo2)
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
//  Description :   Calculates division of two doubles with validation
//  Input :         Double, Double
//  Output :        Double
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

double Division( double dNo1 , double dNo2 )
{

    if( dNo2 == 0.0 )
    {

        printf("The division by zero denominator is undefined.\n");
        return -1.0; // Return error code to satisfy return type

    }
    else if( dNo1 == 0.0 )
    {

        return 0.0;

    }
    else
    {

        double dAns = 0.0;

        dAns = dNo1 / dNo2;

        return dAns;

    }

}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    double dNumOne = 0.0 , dNumTwo = 0.0 , dRetVal = 0.0;

    cout<<"Enter the first number :\t";
    cin>>dNumOne;

    cout<<"Enter the second number :\t";
    cin>>dNumTwo;

    dRetVal = Division( dNumOne , dNumTwo );

    // Only display result if denominator was valid
    if( dNumTwo != 0.0 )
    {

        cout<<"The division of "<<dNumOne<<" and "<<dNumTwo<<" is : "<<dRetVal<<".\n";

    }

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 100.0       Input2 : 8.0         Output : 12.5
//  Input1 : 7.5         Input2 : 0.0         Output : Undefined
//  Input1 : 0.0         Input2 : 5.0         Output : 0.0
//
/////////////////////////////////////////////////////////////////