/*
    Algorithm

    START
        1. Define class 'Logic' to encapsulate integer data.
        2. Accept an integer 'iNum' from the user.
        3. Create an object 'lobj1' of class 'Logic' and pass 'iNum' to the constructor.
        4. Use the object to call 'CheckEvenOrOdd()' directly within an 'if' condition.
        5. Inside the class method:
           - Perform (iNum % 2 == 0) and return the boolean result.
        6. If result is true, print "Even", else print "Odd".
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
//  Class Name :  Logic
//  Description : Encapsulates number-related logical operations
//  Author :      Tushar vikas bhore
//  Date :        25/02/2026
//
/////////////////////////////////////////////////////////////////

class Logic
{
    public:
        int iNum;

        Logic( int iNo )
        {
            iNum = iNo;
        }

        bool CheckEvenOrOdd()
        {
            return ( iNum % 2 == 0 );
        }
};

/////////////////////////////////////////////////////////////////
//
//  Entry point function
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iNum = 0;

    cout << "Enter the number to check is it odd or even :\t";
    cin >> iNum;

    Logic lobj1( iNum );

    // Direct method call within the conditional statement
    if( lobj1.CheckEvenOrOdd() )
    {
        cout << "\nThe entered number is " << iNum << " and it is even." << endl;
    }
    else
    {
        cout << "\nThe entered number is " << iNum << " and it is odd." << endl;
    }

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases:
//  Input : 246         Output : Even
//  Input : 333         Output : Odd
//
/////////////////////////////////////////////////////////////////