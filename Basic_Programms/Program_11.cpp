/*
    Algorithm

    START
        Accept first double number from user as dNumOne
        Accept second double number from user as dNumTwo
        Pass these numbers to Substraction function
        Inside Substraction function:
            If dNo1 is negative, convert it to positive (Absolute value)
            If dNo2 is negative, convert it to positive (Absolute value)
            Perform subtraction: dAns = dNo1 - dNo2
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
//  Description :   Calculates subtraction of two absolute doubles
//  Input :         Double, Double
//  Output :        Double
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

double Substraction( double dNo1 , double dNo2 )
{

    if( dNo1 < 0 )
    {

        dNo1 = -dNo1;

    }

    if( dNo2 < 0 )
    {

        dNo2 = -dNo2;

    }

    double dAns = 0.0;

    dAns = dNo1 - dNo2;

    return dAns;

}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    double dNumOne = 0.0;
    double dNumTwo = 0.0;
    
    double dRetVal = 0.0;

    cout<<"Enter the first number(double) : \t";
    cin>>dNumOne;

    cout<<"Enter the second number(double) : \t";
    cin>>dNumTwo;

    dRetVal = Substraction( dNumOne , dNumTwo );

    cout<<"The substraction of "<<dNumOne<<" and "<<dNumTwo<<" is : "<<dRetVal<<".\n";

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 50.5        Input2 : 20.2        Output : 30.3
//  Input1 : -30.0       Input2 : 10.0        Output : 20.0 (Absolute)
//  Input1 : 10.5        Input2 : 40.5        Output : -30.0
//
/////////////////////////////////////////////////////////////////