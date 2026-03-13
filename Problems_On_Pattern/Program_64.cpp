/////////////////////////////////////////////////////////
//////
////
///     Expected Pattern : 5
///                        5    4
///                        5    4    3
///                        5    4    3    2
///                        5    4    3    2    1
////
/////
/////////////////////////////////////////////////////////

/*
    Algorithm

    START
        Accept number of rows and columns from user
        If either value is less than or equal to zero, or rows are not equal to columns, display error
        Create object of Pattern class with rows and columns
        Display a right-angled numeric triangle pattern using nested for loops
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

/////////////////////////////////////////////////////////////////
//
//  Class Name : Pattern
//  Description : It is used to display the descending numeric triangle pattern
//  Author :      Tushar vikas bhore
//  Date :        09/03/2026
//
/////////////////////////////////////////////////////////////////

class Pattern
{
    public : 

    int iRow = 0 , iCol = 0 , i = 0 , j = 0 , k = 0;

            Pattern( int iRow , int iCol )
            {
                // Initializing member variables with provided input
                this->iRow = iRow;
                this->iCol = iCol;
            }

            void DisplayPattern()
            {
                // Outer loop handles the number of rows
                for( i = 1 ; i <= iRow; i++ )
                {
                    // Inner loop initializes 'k' with column count and decrements it
                    // 'k' tracks the descending numeric value to be printed
                    for( j = 1 , k = iCol; j <= i ; j++ )
                    {
                        // Printing the current value of 'k' and then decrementing
                        cout<<k<<"\t";
                        k--;
                    }

                    // Moving to the next line after completing a row
                    cout<<"\n";
                }
            }
}; // End of Pattern class



/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iRow = 0 , iCol = 0;

    cout<< "Enter the number of rows :\t" ;
    cin>> iRow;

    cout<< "Enter the number of coloms :\t";
    cin>> iCol;

    // Validation check: ensuring dimensions are positive and a square matrix
    if( iRow <= 0 || iCol <= 0 || iRow != iCol )
    {
        cout<< "Error : Please provide positive and non zero and equal values only.\n" ;
        return 0;
    }

    // Create object of the class
    Pattern pobj( iRow , iCol );

    // Display the pattern
    pobj.DisplayPattern();

    return 0;
} // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5 5     Output : Triangle with 5 rows descending from 5
//  Input : 3 3     Output : Triangle with 3 rows descending from 3
//  Input : -1 5    Output : Error : Please provide positive and non zero and equal values only.
//  Input : 3 4     Output : Error : Please provide positive and non zero and equal values only.
//
/////////////////////////////////////////////////////////////////