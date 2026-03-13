/*
    Algorithm

    START
        Accept first double number from user as dNumOne
        Accept second double number from user as dNumTwo
        Pass these numbers to Addition function
        Inside Addition function:
            If number is negative, convert it to positive (Absolute value)
            Perform addition of the two double numbers
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
//  Description :   Calculates addition of two absolute doubles
//  Input :         Double, Double
//  Output :        Double
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

double Addition( double dNo1 , double dNo2 )
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

    dAns = dNo1 + dNo2;

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

    dRetVal = Addition( dNumOne , dNumTwo );

    cout<<"The addition of "<<dNumOne<<" and "<<dNumTwo<<" is : "<<dRetVal<<".\n";

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10.5        Input2 : 20.5        Output : 31.0
//  Input1 : -5.2        Input2 : 10.0        Output : 15.2 (Absolute)
//  Input1 : -1.1        Input2 : -2.2        Output : 3.3 (Absolute)
//
/////////////////////////////////////////////////////////////////