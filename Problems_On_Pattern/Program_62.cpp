/////////////////////////////////////////////////////////
//////
////
///     Expected Pattern : 1    1    1    1    1
///                        2    2    2    2
///                        3    3    3
///                        4    4
///                        5
////
/////
/////////////////////////////////////////////////////////

/*
    Algorithm

    START
        Accept number of rows and columns from user
        If either value is less than or equal to zero, or rows are not equal to columns, display error
        Create object of Pattern class with rows and columns
        Display an inverted right-angled numeric triangle with repeating row values using nested for loops
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
//  Description : It is used to display the inverted triangular repeating numeric pattern
//  Author :      Tushar vikas bhore
//  Date :        09/03/2026
//
/////////////////////////////////////////////////////////////////

class Pattern
{
    public : 

    int iRow = 0 , iCol = 0 , i = 0 , j = 0;

            Pattern( int iRow , int iCol )
            {
                // Initializing member variables with provided input
                this->iRow = iRow;
                this->iCol = iCol;
            }

            void DisplayPattern()
            {
                // Outer loop handles the number of rows
                for( i = 1; i <= iRow; i++ )
                {
                    // Inner loop handles printing the current row number 'i' repeatedly
                    // Formula: (iCol + 1) - i calculates decreasing column range
                    for( j = 1; j <= ( ( iCol + 1 ) - i ); j++ )
                    {
                        // Printing the current row index
                        cout<<i<<"\t";
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
//  Input : 5 5     Output : Inverted numeric triangle with 5 rows
//  Input : 3 3     Output : Inverted numeric triangle with 3 rows
//  Input : -1 5    Output : Error : Please provide positive and non zero and equal values only.
//  Input : 3 4     Output : Error : Please provide positive and non zero and equal values only.
//
/////////////////////////////////////////////////////////////////