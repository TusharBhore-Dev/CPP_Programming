/*
    Algorithm

    START
        Define a class 'Logic' to encapsulate the data and behavior.
        Inside 'Logic' Class:
            - Create a constructor to initialize the data member 'iNum'.
            - Create a method 'CheckEvenOrOdd' that uses modulo logic.
        In Main:
            - Accept integer input from user.
            - Instantiate (create) an object 'lobj1' of class 'Logic'.
            - Call the method 'CheckEvenOrOdd' using the object.
            - Display result based on the boolean return value.
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
        int iNum; // Characteristics (Data Member)

        // Constructor: Initializes the object with user data
        Logic( int iNo )
        {
            iNum = iNo;
        }

        // Behaviour: Logic to check even or odd
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
    int iValue = 0;
    bool bRet = false;

    cout << "Enter the number to check is it odd or even :\t";
    cin >> iValue;

    // Creating an object of the Logic class
    // This triggers the Constructor
    Logic lobj1( iValue );
    
    // Calling the behavior of the class
    bRet = lobj1.CheckEvenOrOdd();

    if( bRet == true )
    {
        cout << "\nThe entered number is " << iValue << " and it is even." << endl;
    }
    else
    {
        cout << "\nThe entered number is " << iValue << " and it is odd." << endl;
    }

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases:
//  Input : 8           Output : Even
//  Input : 15          Output : Odd
//
/////////////////////////////////////////////////////////////////