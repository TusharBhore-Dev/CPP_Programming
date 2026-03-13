/*
    Algorithm

    START
        Accept first double number from user as dNumOne
        Accept second double number from user as dNumTwo
        Pass these numbers to Multiplication function
        Inside Multiplication function:
            Perform multiplication (dNo1 * dNo2)
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
//  Description :   Calculates multiplication of two double numbers
//  Input :         Double, Double
//  Output :        Double
//  Author :        Tushar vikas bhore
//  Date :          24/02/2026
//
/////////////////////////////////////////////////////////////////

double Multiplication( double dNo1 , double dNo2 )
{

    double dAns = 0.0;

    dAns = dNo1 * dNo2;

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

    dRetVal = Multiplication( dNumOne , dNumTwo );

    cout<<"The multiplication of "<<dNumOne<<" and "<<dNumTwo<<" is : "<<dRetVal<<".\n";

    return 0;

}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 12.5        Input2 : 4.0         Output : 50.0
//  Input1 : -3.33       Input2 : 3.0         Output : -9.99
//  Input1 : 0.0001      Input2 : 0.0001      Output : 1e-08
//
/////////////////////////////////////////////////////////////////